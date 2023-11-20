// DllHook2.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "DllHook2.h"


// This is an example of an exported variable
DLLHOOK2_API int nDllHook2=0;

// This is an example of an exported function.
DLLHOOK2_API int fnDllHook2(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDllHook2::CDllHook2()
{
    return;
}
