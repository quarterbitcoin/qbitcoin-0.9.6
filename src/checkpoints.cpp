// Copyright (c) 2009-2014 The Qbitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

#include <stdint.h>

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    // How many times we expect transactions after the last checkpoint to
    // be slower. This number is a compromise, as it can't be accurate for
    // every system. When reindexing from a fast disk with a slow CPU, it
    // can be up to 20, while when downloading from a slow network with a
    // fast multicore CPU, it won't be much higher than 1.
    static const double fSigcheckVerificationFactor = 5.0;

    struct CCheckpointData {
        const MapCheckpoints *mapCheckpoints;
        int64_t nTimeLastCheckpoint;
        int64_t nTransactionsLastCheckpoint;
        double fTransactionsPerDay;
    };

    bool fEnabled = true;

    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
        ( 1111, uint256("0x000000007d1642b7c4678ae2be62601394847a36bb06fe8bbc5291390781f188"))
        ( 2222, uint256("0x000000008b063f7c65c7d7b9c8c9c9dc05f3ff0a72947b72940c30ee6bd67d66"))
        ( 3333, uint256("0x0000000063104891146ff86041eef20ccfe4d39d0a150f79dc024ba4a80485dd"))
        ( 4444, uint256("0x0000000015bb0472e301f76efbcadf3dc0e286d7cd8305e7047f5ffd3a92e688"))
        ( 5555, uint256("0x000000001dbd6e30f53acb3821cc653598af36d4b2725c2b9a8b64634e160414"))
        ( 6666, uint256("0x000000004ab67894bbedfc6e424612d21f15142ea93404e3abb4f5be6a913e07"))
        ( 7777, uint256("0x00000000166d2baf74945c7f998b1a993f7f61a4c3dccace3470f144005f9112"))
        ( 8888, uint256("0x00000000175fbb9f1874ec962d58d17e5158db73fe3162a9e2ea8bf1f7ab86e0"))
        ( 9999, uint256("0x000000000540a058f6f81c29609acf95282d93409e86440bc0e8ff52faf5086d"))
        (11111, uint256("0x000000002ba13ada68151ab79c99e4f4b6643a6c13e33c34e4983868bf60cf14"))
        (16666, uint256("0x0000000013301f4d5c6b08180bd36872c4629f5cda2abaf1b95b97bae4b4e156"))
        (22222, uint256("0x000000001e0edab11a79b8ec74fb90b6b05e2b7b306084ddc01864a8a7326134"))
        (27777, uint256("0x000000003a749cbf122bef5318565e7c426296be2e1c930431702b4284617350"))
        (33333, uint256("0x0000000021f9b0619aa41ab8b8c09f8484c9c22fdcd5ae6dc7edd2f69a15515b"))
        (38888, uint256("0x0000000011a21119d5feb8f29dd2b9b7605853793807a55a1a1142bc2f298ab1"))
        (44444, uint256("0x00000000294ffb739dcf22b1608ce7f4efbeb90d38dc5d5ded55962fe0388e88"))
        (49999, uint256("0x00000000063a9f97b92adc9efa92e029c41303417b8704e0819981b61e41a9fc"))
        (55555, uint256("0x00000000140478213ae9d8748e17ba5a20f478702f6ae2bb562650d2411afe77"))
        (66666, uint256("0x0000000021de6d63287881a71cdf02a7739591fb159c7b267e60938afc57715d"))
        (72222, uint256("0x0000000002b80b443517c04255ad0a13d58e93436a7164527277b0dca00f5d6d"))
        ;
    static const CCheckpointData data = {
        &mapCheckpoints,
        1389047471, // * UNIX timestamp of last checkpoint block
        30549816,   // * total number of transactions between genesis and last checkpoint
                    //   (the tx=... number in the SetBestChain debug.log lines)
        60000.0     // * estimated number of transactions per day after checkpoint
    };

    static MapCheckpoints mapCheckpointsTestnet =
        boost::assign::map_list_of
        ( 546, uint256("000000002a936ca763904c3c35fce2f3556c559c0214345d31b1bcebf76acb70"))
        ;
    static const CCheckpointData dataTestnet = {
        &mapCheckpointsTestnet,
        1338180505,
        16341,
        300
    };

    static MapCheckpoints mapCheckpointsRegtest =
        boost::assign::map_list_of
        ( 0, uint256("0f9188f13cb7b2c71f2a335e3a4fc328bf5beb436012afca590b1a11466e2206"))
        ;
    static const CCheckpointData dataRegtest = {
        &mapCheckpointsRegtest,
        0,
        0,
        0
    };

    const CCheckpointData &Checkpoints() {
        if (Params().NetworkID() == CChainParams::TESTNET)
            return dataTestnet;
        else if (Params().NetworkID() == CChainParams::MAIN)
            return data;
        else
            return dataRegtest;
    }

    bool CheckBlock(int nHeight, const uint256& hash)
    {
        if (!fEnabled)
            return true;

        const MapCheckpoints& checkpoints = *Checkpoints().mapCheckpoints;

        MapCheckpoints::const_iterator i = checkpoints.find(nHeight);
        if (i == checkpoints.end()) return true;
        return hash == i->second;
    }

    // Guess how far we are in the verification process at the given block index
    double GuessVerificationProgress(CBlockIndex *pindex) {
        if (pindex==NULL)
            return 0.0;

        int64_t nNow = time(NULL);

        double fWorkBefore = 0.0; // Amount of work done before pindex
        double fWorkAfter = 0.0;  // Amount of work left after pindex (estimated)
        // Work is defined as: 1.0 per transaction before the last checkpoint, and
        // fSigcheckVerificationFactor per transaction after.

        const CCheckpointData &data = Checkpoints();

        if (pindex->nChainTx <= data.nTransactionsLastCheckpoint) {
            double nCheapBefore = pindex->nChainTx;
            double nCheapAfter = data.nTransactionsLastCheckpoint - pindex->nChainTx;
            double nExpensiveAfter = (nNow - data.nTimeLastCheckpoint)/86400.0*data.fTransactionsPerDay;
            fWorkBefore = nCheapBefore;
            fWorkAfter = nCheapAfter + nExpensiveAfter*fSigcheckVerificationFactor;
        } else {
            double nCheapBefore = data.nTransactionsLastCheckpoint;
            double nExpensiveBefore = pindex->nChainTx - data.nTransactionsLastCheckpoint;
            double nExpensiveAfter = (nNow - pindex->nTime)/86400.0*data.fTransactionsPerDay;
            fWorkBefore = nCheapBefore + nExpensiveBefore*fSigcheckVerificationFactor;
            fWorkAfter = nExpensiveAfter*fSigcheckVerificationFactor;
        }

        return fWorkBefore / (fWorkBefore + fWorkAfter);
    }

    int GetTotalBlocksEstimate()
    {
        if (!fEnabled)
            return 0;

        const MapCheckpoints& checkpoints = *Checkpoints().mapCheckpoints;

        return checkpoints.rbegin()->first;
        //return 0;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        if (!fEnabled)
            return NULL;

        const MapCheckpoints& checkpoints = *Checkpoints().mapCheckpoints;

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, checkpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
                //return NULL;
        }
        return NULL;
    }
}
