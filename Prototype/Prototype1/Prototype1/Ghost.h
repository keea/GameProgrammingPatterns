#pragma once
/*
*
* @file		Ghost.h
* @date     Fri Jan 26 13:36:57 2018
* @author   keea
*/

#include "Monster.h"
class Ghost : public Monster
{
private:
	int health;
	int speed;
public:
	Ghost(int _health, int _speed);
	virtual Monster* clone();
};

