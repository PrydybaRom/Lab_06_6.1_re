#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1_re.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rek
{
	TEST_CLASS(UnitTest61rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int SIZE = 25;
			int a = -5, b = 12;
			int arr[SIZE]{};

			int n = CountArr(arr, SIZE, 0);

			Assert::AreEqual(n, 25);

		}
	};
}
