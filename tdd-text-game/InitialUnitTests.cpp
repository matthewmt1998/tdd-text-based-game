#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tddtextgame
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(HealthVariableCheck)
		{
			CharacterHealth*GetThis = new CharacterHealth(100);
			int expectedhealth= 100;


			Assert::AreEqual(expectedhealth, GetThis->GetCharacterHealth());
		}

	};
}