#include "stdafx.h"
#include "CppUnitTest.h"
#include "Add_lib.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_ADD
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		/*���ӷ���������Ϊint*/
	
		//TEST_METHOD(Test1)
		//{
		//	Assert::AreEqual((int)-2147483647, Add(2, 2147483647));// TODO:  �ڴ�������Դ���
		//}

		//TEST_METHOD(Test2)
		//{
		//	Assert::AreEqual((int)2147483649, Add(2, 2147483647));// TODO:  �ڴ�������Դ���
		//}

		//TEST_METHOD(Test3)
		//{
		//	Assert::AreEqual((int)-2147483648, Add(0, 2147483648));// TODO:  �ڴ�������Դ���
		//}
		//TEST_METHOD(Test4)
		//{
		//	Assert::AreEqual((int)2147483648, Add(0, 2147483648));// TODO:  �ڴ�������Դ���
		//}
		//TEST_METHOD(Test5)
		//{
		//	Assert::AreEqual((int)-18446744073709551615, Add(2, 18446744073709551615));// TODO:  �ڴ�������Դ���
		//}
		//TEST_METHOD(Test6)
		//{
		//	Assert::AreEqual((int)-18446744073709551617, Add(2, 18446744073709551615));// TODO:  �ڴ�������Դ���
		//}

		//TEST_METHOD(Test7)
		//{
		//	Assert::AreEqual((int)2147483648, Add(0, 2147483648));// TODO:  �ڴ�������Դ���
		//}


		/*���ӷ���������Ϊdouble������Ϊint��ֻ�ɼ��㵽32λ-1����2��3��7��8��9����֤��*/
		//TEST_METHOD(Test1)
		//{
		//	Assert::AreEqual((double)-2147483647.0, Add(2, 2147483647));// TODO:  �ڴ�������Դ���
		//}

		TEST_METHOD(Test2)
		{
			Assert::AreEqual((double)2147483649.0, Add(2, 2147483647));// TODO:  �ڴ�������Դ���
		}

		TEST_METHOD(Test3)
		{
			Assert::AreEqual((double)-2147483648.0, Add(0, 2147483648));// TODO:  �ڴ�������Դ���
		}
		//TEST_METHOD(Test4)
		//{
		//	Assert::AreEqual((double)2147483648.0, Add(0, 2147483648));// TODO:  �ڴ�������Դ���
		//}
		//TEST_METHOD(Test5)
		//{
		//	Assert::AreEqual((double)-18446744073709551615.0, Add(2, 18446744073709551615));// TODO:  �ڴ�������Դ���
		//}
		//TEST_METHOD(Test6)
		//{
		//	Assert::AreEqual((double)18446744073709551615, Add(0, 18446744073709551615));// TODO:  �ڴ�������Դ���
		//}
		TEST_METHOD(Test7)
		{
			Assert::AreEqual((double)4294967294, Add(2147483647, 2147483647));// TODO:  �ڴ�������Դ���
		}
		//TEST_METHOD(Test8)
		//{
		//	Assert::AreEqual((double)4294967296, Add(2147483648, 2147483648));// TODO:  �ڴ�������Դ���
		//}
		TEST_METHOD(Test9)
		{
			Assert::AreEqual((double)-4294967296, Add(-2147483648, -2147483648));// TODO:  �ڴ�������Դ���
		}
		///*���ӷ���������Ϊlong int,�˴β��Կ�֤��long int ��������64λ*/
		
		//TEST_METHOD(Test1)
		//{
		//	Assert::AreEqual((int)-2147483647, Add(2, 2147483647));// TODO:  �ڴ�������Դ���
		//}

		//TEST_METHOD(Test2)
		//{
		//	Assert::AreEqual((int)2147483649, Add(2, 2147483647));// TODO:  �ڴ�������Դ���
		//}

		//TEST_METHOD(Test3)
		//{
		//	Assert::AreEqual((int)-2147483648, Add(0, 2147483648));// TODO:  �ڴ�������Դ���
		//}
		//TEST_METHOD(Test4)
		//{
		//	Assert::AreEqual((int)2147483648, Add(0, 2147483648));// TODO:  �ڴ�������Դ���
		//}
		//TEST_METHOD(Test5)
		//{
		//	Assert::AreEqual((int)-18446744073709551615, Add(2, 18446744073709551615));// TODO:  �ڴ�������Դ���
		//}
		//TEST_METHOD(Test6)
		//{
		//	Assert::AreEqual((int)-18446744073709551617, Add(2, 18446744073709551615));// TODO:  �ڴ�������Դ���
		//}

		/*���ӷ���������Ϊlong long int,���ɴ�����Ϣ ����������û��long long int*/
		//TEST_METHOD(Test2)
		//{ 
		//	Assert::AreEqual((unsigned long long)4294967294, Add(2147483647, 1));// TODO:  �ڴ�������Դ���
		//}

	};
}