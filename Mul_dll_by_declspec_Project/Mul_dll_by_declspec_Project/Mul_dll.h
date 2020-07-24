#ifndef  _MUL_DLL_H
#define  _MUL_DLL_H
//#define  DLLProvider
#ifdef  DLLProvider
#define DLL_EXPORT_IMPORT extern "C" __declspec(dllexport)
#else
#define DLL_EXPORT_IMPORT extern "C" __declspec(dllimport)
#endif
DLL_EXPORT_IMPORT int Mul(int a, int b);
#endif/*_MUL_DLL_H*/