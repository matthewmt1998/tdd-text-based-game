#include "stdafx.h"
#include "CharacterHealth.h"


CharacterHealth::CharacterHealth(int Health)
{
	CharacterHealthTotal = Health;
}


CharacterHealth::~CharacterHealth()
{
}


int CharacterHealth::GetCharacterHealth() 
{
	return CharacterHealthTotal;
}

CharacterHealth::CharacterHealth(int Health, int Battle)
{
	NewHealth = Health - Battle;
}

CharacterHealth::CharacterHealth(int Health, int invalid, int Healthup)
{
	HealthUp = Health + Healthup;
}
int CharacterHealth::GetNewHealth()
{
	return NewHealth;
}

int CharacterHealth::GetHealthUp()
{
	return HealthUp;
}