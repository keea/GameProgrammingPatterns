/*
*
* @file		Spawner.cpp
* @date     Fri Jan 26 14:41:18 2018
* @author   keea
*/

#include "Spawner.h"



Spawner::Spawner(Monster * _prototype)
	:prototype(_prototype)
{
}

Monster * Spawner::SpawnMonster() {
	return prototype->clone();
}