/*
*
* @file		SpawnerFor.h
* @date     Tue Jan 30 13:19:19 2018
* @author   keea
*/

#pragma once
#include "Spawner.h"

template <class T>
class SpawnerFor : public Spawner
{
public:
	virtual Monster * SpawnMonster() { return new T(); };
};

