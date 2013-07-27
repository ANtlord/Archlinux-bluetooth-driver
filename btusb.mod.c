#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x8cbfbcdf, "module_layout" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xf6c9f62d, "usb_deregister" },
	{ 0x30da02df, "usb_register_driver" },
	{ 0x121ad3b, "usb_set_interface" },
	{ 0x64e51e90, "usb_autopm_put_interface" },
	{ 0xa7b4991d, "usb_autopm_get_interface" },
	{ 0x68e2f221, "_raw_spin_unlock" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x9c62836c, "kfree_skb" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x9ce4f51d, "usb_match_id" },
	{ 0x9a8fd2a8, "skb_queue_tail" },
	{ 0x8cb40148, "skb_put" },
	{ 0x4d8ef550, "__alloc_skb" },
	{ 0xe827dd3c, "hci_register_dev" },
	{ 0xfb7f27d, "usb_driver_claim_interface" },
	{ 0x80bcdf48, "usb_ifnum_to_if" },
	{ 0x824cf3f2, "hci_alloc_dev" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x23d2381b, "hci_free_dev" },
	{ 0x88f6082f, "usb_driver_release_interface" },
	{ 0x1c23965b, "hci_unregister_dev" },
	{ 0x7ca08525, "dev_set_drvdata" },
	{ 0x88bfa7e, "cancel_work_sync" },
	{ 0x8c4db1b5, "usb_kill_anchored_urbs" },
	{ 0x98503a08, "_raw_spin_unlock_irq" },
	{ 0x8fb576b8, "usb_scuttle_anchored_urbs" },
	{ 0x31fb4c19, "usb_get_from_anchor" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x7fee351b, "hci_recv_fragment" },
	{ 0xb61a0c3b, "bt_err" },
	{ 0x762cf0cf, "usb_unanchor_urb" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xab0b6dde, "usb_free_urb" },
	{ 0x65a076a4, "usb_submit_urb" },
	{ 0x3f6243f7, "usb_anchor_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9df3b0f5, "kmem_cache_alloc_trace" },
	{ 0x3dddb506, "kmalloc_caches" },
	{ 0x2a8527e1, "usb_alloc_urb" },
	{ 0xf89843f9, "schedule_work" },
	{ 0x9ca3dbf1, "dev_get_drvdata" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,bluetooth";

MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");

MODULE_INFO(srcversion, "AFB13958368AA341DA9261A");
