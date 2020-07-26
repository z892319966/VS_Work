#include <stdio.h>

#include "windows.h" 
HMODULE hmod = NULL; //模块句柄
FARPROC proc; //函数入口指针
typedef double (*LoadProc)(int x, int y);

	int main()
	{


		printf("Hello World!\n");
		//LoadLibraryEx("DLL绝对路径", NULL, LOAD_WITH_ALTERED_SEARCH_PATH);

		HMODULE  mydll = LoadLibrary(L"G://xinjeStudy//VS_work//Mul_dll_by_declspec_Project//Debug//Mul_dll_by_declspec_Project.dll");
		if (mydll != NULL)
		{
			LoadProc	Procmul = (LoadProc)GetProcAddress(mydll, "Mul");
			if (Procmul != NULL)
			{
				printf("%lf", Procmul(1,2));
			}
			else
				printf("no ProcAdd1 and GetProcAddress=%d\n", Procmul);
		}
		else
		{
			printf("no dll and LoadLibrary=%d\n", mydll);
		}
		FreeLibrary(mydll);
		getchar();

		/*double c;
		c = 18446744073709551615.0;
		
			printf("%.20f\n",c);
		getchar();*/
	/*	printf("%d\n", Mul(1, 2));
		getchar();*/
		return 0;
	
	}


