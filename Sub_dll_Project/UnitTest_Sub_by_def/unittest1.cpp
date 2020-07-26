#include "stdafx.h"
#include "CppUnitTest.h"
#include"../Sub_dll_Project/Sub_dll_by_def.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_Sub_by_def
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test1)
		{
			Assert::AreEqual(2.0, Sub(5, 3));
			// TODO:  在此输入测试代码
		}
		TEST_METHOD(Test2)
		{
			Assert::AreEqual(-4294967295.0, Sub(-2147483648, 2147483647));
			 //TODO:  在此输入测试代码
		}
		TEST_METHOD(Test3)
		{
			Assert::AreEqual(4294967295.0, Sub(2147483647, -2147483648));
			// TODO:  在此输入测试代码
		}
		TEST_METHOD(Test4)
		{
			Assert::AreEqual(0.0, Sub(2147483648, -2147483648));
			// TODO:  在此输入测试代码
		}
	};
}