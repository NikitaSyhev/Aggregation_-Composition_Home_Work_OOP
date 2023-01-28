#include "Composition.h"

Engine::Engine(int hp): _horsePowers(hp) {}

int Engine::getHP()
{
	return _horsePowers;
}

void Engine::setHP(const int hp)
{
	_horsePowers = hp;
}
Car::Car(int HP) : _engine(HP) {}

void Car::show()
{
	std::cout << "Engine = " << _engine.getHP() << " HP." << std::endl << std::endl;
}
