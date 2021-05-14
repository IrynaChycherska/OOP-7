#include "pch.h"
#include "CppUnitTest.h"
#include"../7.1/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			array<int, 100> arr = { 1, 2, 5, 7 };
			Assert::AreEqual(avg(arr, 4), 4.);
		}
	};
}
