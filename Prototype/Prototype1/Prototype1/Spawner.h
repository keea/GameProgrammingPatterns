/*
*
* @file		Spawner.h
* @date     Fri Jan 26 14:38:22 2018
* @author   keea
*/

#pragma once
#include "Monster.h"
class Spawner
{
private:
	Monster * prototype;
public:
	Spawner(Monster * _prototype);
	Monster * SpawnMonster();
};

