#undef BANNER_TIMEOUT
#undef ROM_BANNER_TIMEOUT

#define BANNER_TIMEOUT		0
#define ROM_BANNER_TIMEOUT	( 2 * BANNER_TIMEOUT )
#define	NET_PROTO_IPV4		/* IPv4 protocol */
#undef	NET_PROTO_IPV6		/* IPv6 protocol */
#undef	NET_PROTO_FCOE		/* Fibre Channel over Ethernet protocol */
//#undef	PXE_STACK		/* PXE stack in iPXE - you want this! */
#undef	PXE_MENU		/* PXE menu booting */
#define	DOWNLOAD_PROTO_TFTP	/* Trivial File Transfer Protocol */
#undef	DOWNLOAD_PROTO_HTTP	/* Hypertext Transfer Protocol */
#undef	DOWNLOAD_PROTO_HTTPS	/* Secure Hypertext Transfer Protocol */
#undef	DOWNLOAD_PROTO_FTP	/* File Transfer Protocol */
#undef	DOWNLOAD_PROTO_SLAM	/* Scalable Local Area Multicast */
#undef	DOWNLOAD_PROTO_NFS	/* Network File System Protocol */
#undef	SANBOOT_PROTO_ISCSI	/* iSCSI protocol */
#undef	SANBOOT_PROTO_AOE	/* AoE protocol */
#undef	SANBOOT_PROTO_IB_SRP	/* Infiniband SCSI RDMA protocol */
#undef	SANBOOT_PROTO_FCP	/* Fibre Channel protocol */
#undef	CRYPTO_80211_WEP	/* WEP encryption (deprecated and insecure!) */
#undef	CRYPTO_80211_WPA	/* WPA Personal, authenticating with passphrase */
#undef	CRYPTO_80211_WPA2	/* Add support for stronger WPA cryptography */
#define	DNS_RESOLVER		/* DNS resolver */
//#define	IMAGE_NBI		/* NBI image support */
//#define	IMAGE_ELF		/* ELF image support */
//#define	IMAGE_MULTIBOOT		/* MultiBoot image support */
//#define	IMAGE_PXE		/* PXE image support */
//#define	IMAGE_SCRIPT		/* iPXE script image support */
//#define	IMAGE_BZIMAGE		/* Linux bzImage image support */
//#define	IMAGE_COMBOOT		/* SYSLINUX COMBOOT image support */
//#define	IMAGE_EFI		/* EFI image support */
//#define	IMAGE_SDI		/* SDI image support */
//#define	IMAGE_PNM		/* PNM image support */
//#define	IMAGE_PNG		/* PNG image support */
#undef	AUTOBOOT_CMD		/* Automatic booting */
#undef	NVO_CMD			/* Non-volatile option storage commands */
#undef	CONFIG_CMD		/* Option configuration console */
#undef	IFMGMT_CMD		/* Interface management commands */
#undef	IWMGMT_CMD		/* Wireless interface management commands */
#undef FCMGMT_CMD		/* Fibre Channel management commands */
#undef	ROUTE_CMD		/* Routing table management commands */
#undef IMAGE_CMD		/* Image management commands */
#undef DHCP_CMD		/* DHCP management commands */
#undef SANBOOT_CMD		/* SAN boot commands */
#undef MENU_CMD		/* Menu commands */
#undef LOGIN_CMD		/* Login command */
#undef SYNC_CMD		/* Sync command */
//#define NSLOOKUP_CMD		/* DNS resolving command */
//#define TIME_CMD		/* Time commands */
//#define DIGEST_CMD		/* Image crypto digest commands */
//#define LOTEST_CMD		/* Loopback testing commands */
//#define VLAN_CMD		/* VLAN commands */
//#define PXE_CMD		/* PXE commands */
//#define REBOOT_CMD		/* Reboot command */
//#define POWEROFF_CMD		/* Power off command */
//#define IMAGE_TRUST_CMD	/* Image trust management commands */
//#define PCI_CMD		/* PCI commands */
//#define PARAM_CMD		/* Form parameter commands */
//#define NEIGHBOUR_CMD		/* Neighbour management commands */
//#define PING_CMD		/* Ping command */
//#define CONSOLE_CMD		/* Console command */
//#define IPSTAT_CMD		/* IP statistics commands */
//#define PROFSTAT_CMD		/* Profiling commands */
#undef	NONPNP_HOOK_INT19	/* Hook INT19 on non-PnP BIOSes */
//#undef	ERRMSG_80211		/* All 802.11 error descriptions (~3.3kb) */
