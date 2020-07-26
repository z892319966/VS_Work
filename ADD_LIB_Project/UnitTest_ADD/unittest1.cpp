#include "stdafx.h"
#include "CppUnitTest.h"
#include "Add_lib.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_ADD
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		/*当加法返回类型为int*/
	
		//TEST_METHOD(Test1)
		//{
		//	Assert::AreEqual((int)-2147483647, Add(2, 2147483647));// TODO:  在此输入测试代码
		//}

		//TEST_METHOD(Test2)
		//{
		//	Assert::AreEqual((int)2147483649, Add(2, 2147483647));// TODO:  在此输入测试代码
		//}

		//TEST_METHOD(Test3)
		//{
		//	Assert::AreEqual((int)-2147483648, Add(0, 2147483648));// TODO:  在此输入测试代码
		//}
		//TEST_METHOD(Test4)
		//{
		//	Assert::AreEqual((int)2147483648, Add(0, 2147483648));// TODO:  在此输入测试代码
		//}
		//TEST_METHOD(Test5)
		//{
		//	Assert::AreEqual((int)-18446744073709551615, Add(2, 18446744073709551615));// TODO:  在此输入测试代码
		//}
		//TEST_METHOD(Test6)
		//{
		//	Assert::AreEqual((int)-18446744073709551617, Add(2, 18446744073709551615));// TODO:  在此输入测试代码
		//}

		//TEST_METHOD(Test7)
		//{
		//	Assert::AreEqual((int)2147483648, Add(0, 2147483648));// TODO:  在此输入测试代码
		//}


		/*当加法返回类型为double，输入为int，只可计算到32位-1样例2、3、7、8、9可以证明*/
		//TEST_METHOD(Test1)
		//{
		//	Assert::AreEqual((double)-2147483647.0, Add(2, 2147483647));// TODO:  在此输入测试代码
		//}

		TEST_METHOD(Test2)
		{
			Assert::AreEqual((double)2147483649.0, Add(2, 2147483647));// TODO:  在此输入测试代码
		}

		TEST_METHOD(Test3)
		{
			Assert::AreEqual((double)-2147483648.0, Add(0, 2147483648));// TODO:  在此输入测试代码
		}
		//TEST_METHOD(Test4)
		//{
		//	Assert::AreEqual((double)2147483648.0, Add(0, 2147483648));// TODO:  在此输入测试代码
		//}
		//TEST_METHOD(Test5)
		//{
		//	Assert::AreEqual((double)-18446744073709551615.0, Add(2, 18446744073709551615));// TODO:  在此输入测试代码
		//}
		//TEST_METHOD(Test6)
		//{
		//	Assert::AreEqual((double)18446744073709551615, Add(0, 18446744073709551615));// TODO:  在此输入测试代码
		//}
		TEST_METHOD(Test7)
		{
			Assert::AreEqual((double)4294967294, Add(2147483647, 2147483647));// TODO:  在此输入测试代码
		}
		//TEST_METHOD(Test8)
		//{
		//	Assert::AreEqual((double)4294967296, Add(2147483648, 2147483648));// TODO:  在此输入测试代码
		//}
		TEST_METHOD(Test9)
		{
			Assert::AreEqual((double)-4294967296, Add(-2147483648, -2147483648));// TODO:  在此输入测试代码
		}
		///*当加法返回类型为long int,此次测试可证明long int 在这里是64位*/
		
		//TEST_METHOD(Test1)
		//{
		//	Assert::AreEqual((int)-2147483647, Add(2, 2147483647));// TODO:  在此输入测试代码
		//}

		//TEST_METHOD(Test2)
		//{
		//	Assert::AreEqual((int)2147483649, Add(2, 2147483647));// TODO:  在此输入测试代码
		//}

		//TEST_METHOD(Test3)
		//{
		//	Assert::AreEqual((int)-2147483648, Add(0, 2147483648));// TODO:  在此输入测试代码
		//}
		//TEST_METHOD(Test4)
		//{
		//	Assert::AreEqual((int)2147483648, Add(0, 2147483648));// TODO:  在此输入测试代码
		//}
		//TEST_METHOD(Test5)
		//{
		//	Assert::AreEqual((int)-18446744073709551615, Add(2, 18446744073709551615));// TODO:  在此输入测试代码
		//}
		//TEST_METHOD(Test6)
		//{
		//	Assert::AreEqual((int)-18446744073709551617, Add(2, 18446744073709551615));// TODO:  在此输入测试代码
		//}

		/*当加法返回类型为long long int,生成错误信息 好像是里面没有long long int*/
		//TEST_METHOD(Test2)
		//{ 
		//	Assert::AreEqual((unsigned long long)4294967294, Add(2147483647, 1));// TODO:  在此输入测试代码
		//}

	};
}