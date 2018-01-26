/*
*
* @file		Demon.h
* @date     Fri Jan 26 13:38:07 2018
* @author   keea
*/

#pragma once
#include "Monster.h"
class Demon : public Monster
{
private:
	int health;
	int speed;
public:
	Demon(int _health, int _speed);
	virtual Monster * clone();
};

