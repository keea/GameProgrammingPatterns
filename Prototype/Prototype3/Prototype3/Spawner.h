/*
*
* @file		Spawner.h
* @date     Tue Jan 30 13:12:05 2018
* @author   keea
*/

#pragma once
#include "Monster.h"
class Spawner
{
public:
	virtual ~Spawner() {};
	virtual Monster * SpawnMonster() = 0;
};

