#include "Div.h"


double Div(int a, int b, bool *flag)

{
	double c;
	*flag = 1;
	if (b == 0)
	{
		*flag = 0;
		return 0;
	}
	else
	{
		c = (double)a / (double)b;
		return c;

	}
	/*int flag=1;
	if (b == 0)
	{
		flag = 0;
	}
	
	else */
	//double c;

	//c = (double)a / (double)b;

	//return c;


}
