#include<stdio.h>
#include "windows.h" 
#include"Div.h"
#include"Add_lib.h"
#include "Sub_dll_by_def.h"
#include "../../Mul_dll_by_declspec_Project/Mul_dll_by_declspec_Project/Mul_dll.h"

HMODULE hmod = NULL; //ģ����
FARPROC proc; //�������ָ��
typedef int(*LoadProc)(int x, int y);

int main()
{
	
	printf("Hello World!\n");
	//LoadLibraryEx("DLL����·��", NULL, LOAD_WITH_ALTERED_SEARCH_PATH);

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



	//HMODULE hmod = LoadLibrary("G://xinjeStudy//VS_work\Mul_dll_by_declspec_Project//Debug//Mul_dll_by_declspec_Project.dll"); //  //���ڼ���dll


	

//	LoadProc Load_proc = (LoadProc)GetProcAddress(hmod, "Mul");
//	//GetProcAddress()���ڻ�ú�����ַ
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
//	//int iRet = Load_proc(1,1); //�õ���ַ����øú��������ؽϴ�ֵ
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
//		MessageBoxA(NULL, "��ȡdllA_old.dllʧ��", "caption", 0);
//		return 0;
//	}
//	return TRUE;
//}
//
//int add(int a, int b)
//{
//	padd = (Add)GetProcAddress(hModule, "add");  //�����ȡ������ַʧ�� 127
//	if (NULL == padd)
//	{
//		char msg[256];
//		sprintf(msg, "��ȡadd()ʧ��:%d", GetLastError());
//		MessageBoxA(NULL, msg, "caption", 0);
//		return 0;
//	}
//	return padd(a, b);
//}
//
