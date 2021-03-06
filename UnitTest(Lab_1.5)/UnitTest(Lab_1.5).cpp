#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.5/Triad.cpp"
#include "../Lab_1.5/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab15
{
	TEST_CLASS(UnitTestLab15)
	{
	public:

		TEST_METHOD(Test_Triad)
		{
			Triad a;
			a.Init(5, 7, 8);

			Assert::AreEqual(a.Addition() , 20.0);
		}

		TEST_METHOD(Test_Triangle)
		{
			Triangle a;
			Triad b;
			b.Init(5, 5, 6);
			a.Set_side(b);

			Assert::AreEqual(a.Calcul_Square(), 12.0);
		}
	};
}
