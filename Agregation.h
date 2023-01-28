#pragma once
#include <string>
#include <iostream>

//� �������� - ��������������� ���������������� ��� ��������������(��� ��� ���
//    ��� �������� ����� - ��������������) ������������� �������� �������� ������
//    ������ �� ��� ������������ ������� ���� �� ���������.�� ������������� �����
//    ����� ������� ��� �� ���������� �������������� �� �������� �� ������ ����
//    ������, ����� � ����������.


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

