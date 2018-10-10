Quarter Bitcoin version 0.9.6 is now available from:

  https://qbitcoin.net/bin/0.9.6/test/

This is a security update. It is recommended to upgrade to this release
as soon as possible.

It is especially important to upgrade if you currently have version 0.9.0
installed and are using the graphical interface OR you are using qbitcoind from
any pre-0.9.6 version, and have enabled SSL for RPC.

Please report bugs using the issue tracker at github:

  https://github.com/qbitcoin/qbitcoin/issues

How to Upgrade
--------------

If you are running an older version, shut it down. Wait until it has completely
shut down (which might take a few minutes for older versions), then run the
installer (on Windows) or just copy over /Applications/Qbitcoin-Qt (on Mac) or
qbitcoind/qbitcoin-qt (on Linux).



0.9.6 Release notes
=======================
- Upgrade OpenSSL. This release fixes the following vulnerabilities which can
  affect the Quarter Bitcoin software:

  - CVE-2014-0160 ("heartbleed")
    A missing bounds check in the handling of the TLS heartbeat extension can
    be used to reveal up to 64k of memory to a connected client or server.

  - CVE-2014-0076
    The Montgomery ladder implementation in OpenSSL does not ensure that
    certain swap operations have a constant-time behavior, which makes it
    easier for local users to obtain ECDSA nonces via a FLUSH+RELOAD cache
    side-channel attack.

- Add statically built executables to Linux build

Credits
--------

Credits go to the OpenSSL team for fixing the vulnerabilities quickly.

