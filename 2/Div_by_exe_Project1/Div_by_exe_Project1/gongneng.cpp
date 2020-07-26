#include "gongneng.h"
//HMODULE hmod = NULL;
void  cheng(int a, int b)
{

	//LoadLibraryEx("DLL¾ø¶ÔÂ·¾¶", NULL, LOAD_WITH_ALTERED_SEARCH_PATH);

	HMODULE  mydll = LoadLibrary("G://xinjeStudy//VS_work//Mul_dll_by_declspec_Project//Debug//Mul_dll_by_declspec_Project.dll");
	if (mydll != NULL)
	{
		LoadProc	Procmul = (LoadProc)GetProcAddress(mydll, "Mul");
		if (Procmul != NULL)
		{
			printf("a * b = %.0f\n", Procmul(a, b));
		}
		else
			printf("no Procmul and GetProcMulress=%d\n", Procmul);
	}
	else
	{
		printf("no dll and LoadLibrary=%d\n", mydll);
	}
	FreeLibrary(mydll);
	

}

//Input()
//{
//
//
//
//
//}
//Output();