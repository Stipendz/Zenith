
Debian
====================
This directory contains files used to package SPDZd/SPDZ-qt
for Debian-based Linux systems. If you compile SPDZd/SPDZ-qt yourself, there are some useful files here.

## SPDZ: URI support ##


SPDZ-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install SPDZ-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your SPDZqt binary to `/usr/bin`
and the `../../share/pixmaps/SPDZ128.png` to `/usr/share/pixmaps`

SPDZ-qt.protocol (KDE)

