Quarter Bitcoin integration/staging tree
=====================================

http://www.qbitcoin.net

Copyright (c) 2009-2018 Quarter Bitcoin Developers

What is Qbitcoin?
----------------

Qbitcoin is an experimental new digital currency that enables instant payments to
anyone, anywhere in the world. Qbitcoin uses peer-to-peer technology to operate
with no central authority: managing transactions and issuing money are carried
out collectively by the network. Quarter Bitcoin is the name of open source
software which enables the use of this currency.

For more information, as well as an immediately useable, binary version of
the Quarter Bitcoin software, see http://www.qbitcoin.net.

License
-------

Quarter Bitcoin is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the Qbitcoin
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=qbitcoin-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see [doc/coding.md](doc/coding.md)) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/qbitcoin/qbitcoin/tags) are created
regularly to indicate new official, stable release versions of Qbitcoin.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run (assuming they weren't disabled in configure) with: `make check`

Every pull request is built for both Windows and Linux on a dedicated server,
and unit and sanity tests are automatically run. The binaries produced may be
used for manual QA testing �?a link to them will appear in a comment on the
pull request posted by [QbitcoinPullTester](https://github.com/QbitcoinPullTester). See https://github.com/TheBlueMatt/test-scripts
for the build/test scripts.

### Manual Quality Assurance (QA) Testing

Large changes should have a test plan, and should be tested by somebody other
than the developer who wrote the code.
See https://github.com/qbitcoin/QA/ for how to create a test plan.
