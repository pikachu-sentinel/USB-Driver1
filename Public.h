/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_USBDriver1,
    0x619d00ca,0xcc09,0x45ea,0x88,0xef,0xf8,0xc7,0xbe,0x69,0xa2,0xec);
// {619d00ca-cc09-45ea-88ef-f8c7be69a2ec}
