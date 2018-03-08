/*
*
* @file		World.cpp
* @date     Wed Mar  7 19:18:51 2018
* @author   keea
*/

#include <Windows.h>
#include "World.h"
#include "Skeleton.h"
#include "Statue.h"

World::World() :numEntities(0) {
	entities[numEntities++] = new Skeleton();
	entities[numEntities++] = new Statue(1);
}

void World::GameLoop() {
	while (true)
	{
		//유저의 입력 처리...

		//각 객체를 업데이트한다.
		for (int i = 0; i < numEntities; i++) {
			entities[i]->Update();
		}
		//물리, 랜더링...
	}
}
