/*
*
* @file		Sorcerer
* @date     Fri Jan 26 13:38:42 2018
* @author   keea
*/

#pragma once
#include "Monster.h"
class Sorcerer : public Monster
{
private:
	int health;
	int speed;
public:
	Sorcerer(int _health, int _speed);
	virtual Monster * clone();
};

