#pragma once
#include <string>
#include <iostream>

//В объектно - ориентированном программировании под агрегированием(или как его
//    еще называли ранее - делегированием) подразумевают методику создания нового
//    класса из уже существующих классов путём их включения.Об агрегировании также
//    часто говорят как об «отношении принадлежности» по принципу «у машины есть
//    корпус, колёса и двигатель».


class ElectroEngine
{
public:

    ElectroEngine(int hp, int  tor);
    int getHP();
    void setHP(const int hp);

private:
    int _horsePowers = 300;
    int _torque = 300;

};


class Automobile
{
public:
    Automobile(ElectroEngine& EE);
    Automobile();
    void showEngine() {
        std::cout <<"Number of horse powers = " <<  _engine.getHP() << std::endl;
    }
private:
    ElectroEngine _engine;
};

