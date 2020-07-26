#include "Mul_dll.h"

DLL_EXPORT_IMPORT double Mul(int a, int b)
{ 

	double  c;
	//int c;
	//c = a * b;
	c = a*1.0 * b*1.0;
	return c;
}