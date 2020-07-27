#include "stdafx.h"
#include "CppUnitTest.h"
#include  "../Div_by_exe_Project1/Div.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_Div
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		bool flag=0;
		TEST_METHOD(Test1)
		{
			Assert::AreEqual(1.0, Div(2, 2,&flag));
			Assert::IsTrue(flag);
	    // TODO:  在此输入测试代码
		}
		TEST_METHOD(Test2)
		{
			Assert::AreEqual(0.0, Div(2, 0, &flag));
			Assert::IsFalse(flag);
			// TODO:  在此输入测试代码
		}

	};
}