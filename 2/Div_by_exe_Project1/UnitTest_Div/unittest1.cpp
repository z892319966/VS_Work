#include "stdafx.h"
#include "CppUnitTest.h"
#include  "../Div_by_exe_Project1/Div.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_Div
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		bool flag;
		TEST_METHOD(Test1)
		{
			Assert::AreEqual(1.0, Div(2, 2,&flag));
	// TODO:  在此输入测试代码
		}

	};
}