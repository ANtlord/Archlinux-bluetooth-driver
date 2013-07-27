Archlinux bluetooth module
--------------------------

This module provide laptop's bluetooth produced Chicony Electronics,
which defined as 04f2:aff1.

This project has files from http://www.kernel.org/pub/linux/kernel/v3.x/linux-3.6.tar.xz
This files extracted by command `tar xJf linux-3.6.tar.xz --strip-components=3 linux-3.6/drivers/bluetooth/ath3k.c linux-3.6/drivers/bluetooth/btusb.c`

Makecommand `make -C /usr/src/linux-`uname -r` SUBDIRS=$PWD modules`
After building type commands from project directory.
1. `modprobe -r btusb`
2. `modprobe -r ath3k`
3. `insmod ./ath3k.ko`
4. `insmod ./btusb.ko`
