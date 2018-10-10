
Debian
====================
This directory contains files used to package qbitcoind/qbitcoin-qt
for Debian-based Linux systems. If you compile qbitcoind/qbitcoin-qt yourself, there are some useful files here.

## qbitcoin: URI support ##


qbitcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install qbitcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your qbitcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/qbitcoin128.png` to `/usr/share/pixmaps`

qbitcoin-qt.protocol (KDE)

