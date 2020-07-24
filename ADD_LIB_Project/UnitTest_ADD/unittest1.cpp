#include "stdafx.h"
#include "CppUnitTest.h"
#include "Add_lib.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_ADD
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(68, Add('a', 3));// TODO:  在此输入测试代码
		}

	};
}