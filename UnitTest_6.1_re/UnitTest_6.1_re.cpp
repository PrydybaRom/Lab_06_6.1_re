#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1_re.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61re
{
	TEST_CLASS(UnitTest61re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			const int SIZE = 25;
			int a = -5, b = 12;
			int arr[SIZE]{};

			FullArr(arr, SIZE, a, b, 0);

		}
	};
}
