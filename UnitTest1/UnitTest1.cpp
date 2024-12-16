#include "pch.h"
#include "CppUnitTest.h"
#include "../ClassUnitTestExercise/ClassUnitTestExercise.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(AddTestEqual)
		{
			
			Assert::AreEqual((int)Add(1, 1), 2);
	

		}
		TEST_METHOD(AddTestNotEqual)
		{

			Assert::AreNotEqual((int)Add(1, 1), 2);


		}
	};
}
