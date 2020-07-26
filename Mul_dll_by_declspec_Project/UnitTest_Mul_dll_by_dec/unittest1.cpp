#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Mul_dll_by_declspec_Project/Mul_dll.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_Mul_dll_by_dec
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test1)
		{
			Assert::AreEqual(1.0, Mul(1, 1));
			// TODO:  在此输入测试代码
		}
		TEST_METHOD(Test2)
		{
			Assert::AreEqual(4611686014132420609.0, Mul(2147483647, 2147483647));
			// TODO:  在此输入测试代码
		}
		TEST_METHOD(Test3)
		{
			Assert::AreEqual(4611686018427387904.0, Mul(-2147483648, -2147483648));
			// TODO:  在此输入测试代码
		}
		TEST_METHOD(Test4)
		{
			Assert::AreEqual(-4611686016279904256.0, Mul(-2147483648, 2147483647));
			// TODO:  在此输入测试代码
		}
		TEST_METHOD(Test5)
		{
			Assert::AreEqual(4611686018427387904.0, Mul(-2147483648, 2147483648));
			// TODO:  在此输入测试代码
		}
	};
}