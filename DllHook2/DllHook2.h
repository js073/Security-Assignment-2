// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DLLHOOK2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DLLHOOK2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLLHOOK2_EXPORTS
#define DLLHOOK2_API __declspec(dllexport)
#else
#define DLLHOOK2_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DLLHOOK2_API CDllHook2 {
public:
	CDllHook2(void);
	// TODO: add your methods here.
};

extern DLLHOOK2_API int nDllHook2;

DLLHOOK2_API int fnDllHook2(void);
