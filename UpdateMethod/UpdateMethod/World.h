/*
*
* @file		World.h
* @date     Wed Mar  7 19:17:01 2018
* @author   keea
*/

#pragma once
#include "Entity.h"

const int MAX_ENTITIES = 2;

class World
{
private:
	Entity * entities[MAX_ENTITIES];
	int numEntities;
public:
	World();
	void GameLoop();
};

