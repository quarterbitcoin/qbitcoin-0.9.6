Qbitcoin 0.9.6 BETA
=====================

Copyright (c) 2009-2018 Qbitcoin Developers


Setup
---------------------
[Quarter Bitcoin](http://qbitcoin.net/) is the original Qbitcoin client and it builds the backbone of the network. However, it downloads and stores the entire history of Qbitcoin transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once. If you would like the process to go faster you can [download the blockchain directly](https://qbitcointalk.net).

Running
---------------------
The following are some helpful notes on how to run Qbitcoin on your native platform. 

### Unix

You need the Qt4 run-time libraries to run Qbitcoin-Qt. On Debian or Ubuntu:

	sudo apt-get install libqtgui4

Unpack the files into a directory and run:

- bin/32/qbitcoin-qt (GUI, 32-bit) or bin/32/qbitcoind (headless, 32-bit)
- bin/64/qbitcoin-qt (GUI, 64-bit) or bin/64/qbitcoind (headless, 64-bit)



### Windows

Unpack the files into a directory, and then run qbitcoin-qt.exe.

### OSX

Drag Qbitcoin-Qt to your applications folder, and then run Qbitcoin-Qt.

### Need Help?

* See the documentation at the [Qbitcoin Wiki](https://en.qbitcoin.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#qbitcoin](http://webchat.freenode.net?channels=qbitcoin) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=qbitcoin).
* Ask for help on the [QbitcoinTalk](https://qbitcointalk.org/) forums, in the [Technical Support board](https://qbitcointalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Qbitcoin on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-msw.md)

Development
---------------------
The Qbitcoin repo's [root README](https://github.com/qbitcoin/qbitcoin/blob/master/README.md) contains relevant information on the development process and automated testing.

- [Coding Guidelines](coding.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/qbitcoin/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)

### Resources
* Discuss on the [QbitcoinTalk](https://qbitcointalk.org/) forums, in the [Development & Technical Discussion board](https://qbitcointalk.org/index.php?board=6.0).
* Discuss on [#qbitcoin-dev](http://webchat.freenode.net/?channels=qbitcoin) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=qbitcoin-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)

License
---------------------
Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](http://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
