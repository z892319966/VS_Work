#include "stdafx.h"
#include "CppUnitTest.h"
#include"../Sub_dll_Project/Sub_dll_by_def.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_Sub_by_def
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Testtrue)
		{
			Assert::AreEqual(2, Sub(5, 3));
			// TODO:  在此输入测试代码
		}
		TEST_METHOD(Testno)
		{
			Assert::AreEqual(3, Sub(5, 3));
			// TODO:  在此输入测试代码
		}

	};
}