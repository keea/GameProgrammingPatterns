/*
*
* @file
* @date     Fri Jan 26 15:53:01 2018
* @author   keea
*/

#pragma once
#include "Monster.h"

Monster * spawnGhost();
Monster * spawnDemon();
Monster * spawnSorcerer();

typedef Monster * (*SpawnCallback)();

class Spawner
{
private:
	SpawnCallback spawn;
public:
	Spawner(SpawnCallback _spawn);
	Monster * SpawnMonster();
};

