/*
* 세계 클래스
* @file		World.cpp
* @date     Wed Jan 24 11:06:10 2018
* @author   keea
*/

#include <random>
#include "World.h"

const char TERRAIN_GRASS = '+';
const char TERRAIN_HILL = '^';
const char TERRAIN_RIVER = '=';


World::World()
	:grassTerrain(1, false, TERRAIN_GRASS),
	hillTerrain(3, false, TERRAIN_HILL),
	riverTerrain(2, true, TERRAIN_RIVER)
{
}

void World::GenerateTerrain()
{
	//땅에 풀을 채운다.
	for (int x = 0; x < WIDTH; x++) {
		for (int y = 0; y < HEIGHT; y++) {
			//언덕을 몇 개 놓는다.
			if (rand() % 10 == 0) {
				tiles[x][y] = &hillTerrain;
			}
			else {
				tiles[x][y] = &grassTerrain;
			}
		}
	}
	//강을 하나 놓는다.
	int x = rand() % WIDTH;
	for (int y = 0; y < HEIGHT; y++) {
		tiles[x][y] = &riverTerrain;
	}
}

const Terrain & World::GetTile(int x, int y) const
{
	return *tiles[x][y];
}

const char World::GetTexture(int x, int y) const
{
	return tiles[x][y]->GetTexture();
}

