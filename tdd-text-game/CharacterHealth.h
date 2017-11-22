#pragma once
class CharacterHealth
{
private:
	int CharacterHealthTotal;
	int NewHealth;
	int HealthUp;

public:
	CharacterHealth(int Health);
	int GetCharacterHealth();

	~CharacterHealth();

	CharacterHealth(int Health, int Battle);
	int GetNewHealth();

	CharacterHealth(int Health, int invalid, int Healthup);
	int GetHealthUp();
};

