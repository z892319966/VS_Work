#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Div.h"
#include"Add_lib.h"
#include "Sub_dll_by_def.h"
#include "gongneng.h"
//#include "../../Mul_dll_by_declspec_Project/Mul_dll_by_declspec_Project/Mul_dll.h"


int main()
{
	int a, b;
	bool  flag;
	double c;
	char s;

	while (1)
	{

		printf("请输入你要测试的两个数据：\n");
		printf("输入数据均要为整型：\n");

		scanf_s("%d %d", &a, &b);
		//printf("%d %d\n",a,b);
		printf("a + b = %.0f\n", Add(a, b));
		printf("a - b = %.0f\n", Sub(a, b));
		cheng(a, b);
		c = Div(a, b, &flag);
		if (flag == 0)
		{
			printf("!!!除数不能为0!!!\n");
			printf("!!!除数不能为0!!!\n");
			printf("!!!除数不能为0!!!\n");
		}
		else
		{
			printf("a / b = %.3f\n", c);
		}

		/*printf("a / b = %.3f\n", Div(a, b, &flag));*/
		//printf("a/b=%d\n",Div(a, b));
		system("pause");

	}
	
	
	return 0;



}

