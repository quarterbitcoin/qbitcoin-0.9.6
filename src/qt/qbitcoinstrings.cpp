

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *qbitcoin_strings[] = {
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=qbitcoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Qbitcoin Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Acceptable ciphers (default: TLSv1.2+HIGH:TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!"
"3DES:@STRENGTH)"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv4: %s"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv6, "
"falling back to IPv4: %s"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Cannot obtain a lock on data directory %s. Qbitcoin is probably already "
"running."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly. This is intended for regression testing tools and app "
"development."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Listen for JSON-RPC connections on <port> (default: 8732 or testnet: 18732)"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Output debugging information (default: 0, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Set the number of script verification threads (up to 16, 0 = auto, <0 = "
"leave that many cores free, default: 0)"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Unable to bind to %s on this computer. Qbitcoin is probably already running."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: -"
"proxy)"),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Qbitcoin will not work properly."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("qbitcoin-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("qbitcoin-core", "<category> can be:"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Quarter Bitcoin Daemon"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Qbitcoin RPC client version"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Clear list of wallet transactions (diagnostic tool; implies -rescan)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Connect through SOCKS proxy"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Connect to JSON-RPC on <port> (default: 8732 or testnet: 18732)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error loading wallet.dat: Wallet requires newer version of Qbitcoin"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Error: system error: "),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to read block info"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to read block"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to sync block index"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to write block index"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to write block info"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to write block"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to write file info"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to write to coin database"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to write transaction index"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Failed to write undo data"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Fee per kB to add to transactions you send"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Find peers using DNS lookup (default: 1 unless -connect)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Generate coins (default: 0)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Get help for a command"),
QT_TRANSLATE_NOOP("qbitcoin-core", "How many blocks to check at startup (default: 288, 0 = all)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "How thorough the block verification is (0-4, default: 3)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("qbitcoin-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Information"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("qbitcoin-core", "List commands"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Listen for connections on <port> (default: 8733 or testnet: 18733)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("qbitcoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("qbitcoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("qbitcoin-core", "Maintain a full transaction index (default: 0)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("qbitcoin-core", "Only accept block chain matching built-in checkpoints (default: 1)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Options:"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Prepend debug output with timestamp (default: 1)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "RPC client options:"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("qbitcoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("qbitcoin-core", "SSL options: (see the Qbitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Select SOCKS version for -proxy (4 or 5, default: 5)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Send command to Qbitcoin server"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Set database cache size in megabytes (default: 25)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Set minimum block size in bytes (default: 0)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Set the number of threads to service RPC calls (default: 4)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Specify configuration file (default: qbitcoin.conf)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Specify connection timeout in milliseconds (default: 5000)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Specify pid file (default: qbitcoind.pid)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Spend unconfirmed change when sending transactions (default: 1)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Start Qbitcoin server"),
QT_TRANSLATE_NOOP("qbitcoin-core", "System error: "),
QT_TRANSLATE_NOOP("qbitcoin-core", "This help message"),
QT_TRANSLATE_NOOP("qbitcoin-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("qbitcoin-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "To use the %s option"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Unable to bind to %s on this computer (bind returned error %d, %s)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Unknown -socks proxy version requested: %i"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Usage (deprecated, use qbitcoin-cli):"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Usage:"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Use UPnP to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("qbitcoin-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("qbitcoin-core", "Wait for RPC server to start"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Wallet needed to be rewritten: restart Qbitcoin to complete"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Wallet options:"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Warning"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Warning: Deprecated argument -debugnet ignored, use -debug=net"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("qbitcoin-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("qbitcoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("qbitcoin-core", "version"),
QT_TRANSLATE_NOOP("qbitcoin-core", "wallet.dat corrupt, salvage failed"),
};
