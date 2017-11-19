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