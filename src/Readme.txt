This USB pxe boot program will operate on xHCI hardware and conforms to the NCM protocol as defined by usb.org.

To use the .usb file, copy it onto a flash key either using dd on linux, or something like "Win32 Disk Image" http://sourceforge.net/projects/win32diskimager/

The .rom file is in the form to be used in an OptionROM. The PCI VID and DID are set to zero, and the PCI class ID is for a network card. 

The other .rom files have the PCI VID and DID set as described in the filename.

On Intel hardware, the port routing advertised by the BIOS will be switched to xHCI from EHCI, and reverted back again upon handover to the loaded OS.
