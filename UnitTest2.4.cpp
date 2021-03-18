#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab2.4/Lab2.4/Matrix.h"
#include "../Lab2.4/Lab2.4/Matrix.cpp"
#include "../Lab2.4/Lab2.4/Row.h"
#include "../Lab2.4/Lab2.4/Row.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest24
{
	TEST_CLASS(UnitTest24)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix A(2), B(2);
			Assert::AreEqual(A == B, true);
		}
	};
}
