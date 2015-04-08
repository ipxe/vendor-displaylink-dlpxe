/* We need to build separate xHCI-only and EHCI-only ROM images, and
 * we need to provide a specific PCI vendor:device ID for each ROM.
 * The simplest way to do this is to disable both USB_HCD_XHCI and
 * USB_HCD_EHCI.  This prevents the xHCI and EHCI code from being
 * included automatically.  We then drag in xHCI/EHCI as needed via
 * the PCI vendor:device ID in the build target.
 */

#undef	USB_HCD_XHCI
#undef	USB_HCD_EHCI
