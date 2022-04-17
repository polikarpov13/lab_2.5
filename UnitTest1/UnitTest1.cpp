#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/2/lab__2.5/lab__2.5/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t1;
			t1.Init(1,2,3);
			Assert::AreEqual(2, t1.getSecond());
		}
	};
}
