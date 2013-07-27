Archlinux bluetooth module
--------------------------

This module provide laptop's bluetooth produced Chicony Electronics,
which defined as 04f2:aff1.

This project has files from http://www.kernel.org/pub/linux/kernel/v3.x/linux-3.6.tar.xz
This files extracted by command `tar xJf linux-3.6.tar.xz --strip-components=3 linux-3.6/drivers/bluetooth/ath3k.c linux-3.6/drivers/bluetooth/btusb.c`

# ath3k.c file changed by line `{ USB_DEVICE(0x04F2, 0xAFF1) }`, which added to array `static struct usb_device_id ath3k_table[]`
# btusb.c changed by line `{ USB_DEVICE(0x04F2, 0xAFF1), .driver_info = BTUSB_IGNORE }` in array массив static struct `usb_device_id blacklist_table[]`

Makecommand `make -C /usr/src/linux-\`uname -r\` SUBDIRS=$PWD modules`
After building type commands from project directory.
1. `modprobe -r btusb`
2. `modprobe -r ath3k`
3. `insmod ./ath3k.ko`
4. `insmod ./btusb.ko`
