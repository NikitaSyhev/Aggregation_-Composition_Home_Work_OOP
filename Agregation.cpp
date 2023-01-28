#include "Agregation.h"



ElectroEngine::ElectroEngine(int hp, int  tor) : _horsePowers(hp), _torque(tor) {}

int ElectroEngine::getHP()
{
	return _horsePowers;
}

void ElectroEngine::setHP(const int hp)
{
	_horsePowers = hp;
}

Automobile::Automobile(ElectroEngine& EE) : _engine(EE){}
