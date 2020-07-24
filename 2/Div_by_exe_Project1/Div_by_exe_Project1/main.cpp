#include<stdio.h>
#include "windows.h" 
#include"Div.h"
#include"Add_lib.h"
#include "Sub_dll_by_def.h"
#include "../../Mul_dll_by_declspec_Project/Mul_dll_by_declspec_Project/Mul_dll.h"

HMODULE hmod = NULL; //模块句柄
FARPROC proc; //函数入口指针
typedef int(*LoadProc)(int x, int y);

int main()
{
	
	printf("Hello World!\n");
	//LoadLibraryEx("DLL绝对路径", NULL, LOAD_WITH_ALTERED_SEARCH_PATH);

	HMODULE  mydll = LoadLibrary("G://xinjeStudy//VS_work//Mul_dll_by_declspec_Project//Debug//Mul_dll_by_declspec_Project.dll");
	if (mydll != NULL)
	{
		LoadProc	Procmul = (LoadProc)GetProcAddress(mydll, "Mul");
		if (Procmul != NULL)
		{
			printf("a*b = %d\n", Procmul(1, 2));
		}
		else
			printf("no ProcAdd1 and GetProcAddress=%d\n", Procmul);
	}
	else
	{
		printf("no dll and LoadLibrary=%d\n", mydll);
	}
	FreeLibrary(mydll);



	//HMODULE hmod = LoadLibrary("G://xinjeStudy//VS_work\Mul_dll_by_declspec_Project//Debug//Mul_dll_by_declspec_Project.dll"); //  //用于加载dll


	

//	LoadProc Load_proc = (LoadProc)GetProcAddress(hmod, "Mul");
//	//GetProcAddress()用于获得函数地址
//
//	if (Load_proc == NULL)
//	{
//		printf("aaaa");
//
//	}
//	else
//	{
//		printf("bbbb");
//
//
//	}
//	FreeLibrary(hmod);
//	//int iRet = Load_proc(1,1); //得到地址后调用该函数，返回较大值
//
//	//printf("the Add the value is:%d\n", iRet);
//	getchar();
//	//FreeLibrary(hmod);
//
////	return 0;
//
//	//printf("%d\n", Add(1, 2));
//	//printf("%d\n", Sub(1, 2));
//	////printf("%d\n", Mul(1, 2));
//	//printf("%f\n", Div(1, 2));

	getchar();
	return 0;



}

//#include<windows.h>
//#include<stdio.h>
//
//#pragma comment(linker,"/export:add=dllA_old.add")
//
//
//Add padd;
//BOOL APIENTRY DllMain(HANDLE hModule,
//	DWORD  ul_reason_for_call,
//	LPVOID lpReserved
//	)
//{
//	if (NULL == hModule)
//	{
//		hModule = LoadLibrary("dllA_old.dll");
//	}
//	if (NULL == hModule)
//	{
//		MessageBoxA(NULL, "获取dllA_old.dll失败", "caption", 0);
//		return 0;
//	}
//	return TRUE;
//}
//
//int add(int a, int b)
//{
//	padd = (Add)GetProcAddress(hModule, "add");  //这里获取函数地址失败 127
//	if (NULL == padd)
//	{
//		char msg[256];
//		sprintf(msg, "获取add()失败:%d", GetLastError());
//		MessageBoxA(NULL, msg, "caption", 0);
//		return 0;
//	}
//	return padd(a, b);
//}
//
