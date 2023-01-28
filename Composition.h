#pragma once
#include <string>
#include <iostream>

//// Композиция - более строгий вариант агрегирования,
//когда включаемый объект может существовать только как часть контейнера.Если
//контейнер будет уничтожен, то и включённый объект тоже будет уничтожен.



class Engine
{
public:

    Engine(int hp);
 
    int getHP();
    void setHP(const int hp);

private:
    int _horsePowers=200;
   
};

class Car
{
public:
    Car(int HP);
    void show();

private:
    std::string _type = "sedan";
    Engine _engine;
};

