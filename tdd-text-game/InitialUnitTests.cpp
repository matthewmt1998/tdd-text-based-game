#include "stdafx.h"
#include "CharacterHealth.h"
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
		TEST_METHOD(HealthBattleCheck)
		{
			CharacterHealth*GetThis = new CharacterHealth(100,25);
			int expectedhealth = 75;


			Assert::AreEqual(expectedhealth, GetThis->GetNewHealth());
		}
		TEST_METHOD(HealthVariableGain)
		{
			CharacterHealth*GetThis = new CharacterHealth(90,0,10);
			int expectedhealth = 100;


			Assert::AreEqual(expectedhealth, GetThis->GetHealthUp());
		}
	};
}