#include <stdio.h>

#include "windows.h" 
HMODULE hmod = NULL; //模块句柄
FARPROC proc; //函数入口指针
typedef int(*LoadProc)(int x, int y);

	int main()
	{


		printf("Hello World!\n");
		//LoadLibraryEx("DLL绝对路径", NULL, LOAD_WITH_ALTERED_SEARCH_PATH);

		HMODULE  mydll = LoadLibrary(L"../Debug/Mul_dll_by_declspec_Project.dll");
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

		getchar();
	/*	printf("%d\n", Mul(1, 2));
		getchar();*/
		return 0;
	
	}


