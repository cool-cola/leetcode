#include <iostream>
#include "GameCharacter.h"

int main()
{
	CGameCharacter Game(new CHealthCalcFunc);
	std::cout << Game.healthValue() << std::endl;

	return 0;
}