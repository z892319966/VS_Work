#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Mul_dll_by_declspec_Project/Mul_dll.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_Mul_dll_by_dec
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1, Mul(1, 1));
			// TODO:  在此输入测试代码
		}

	};
}