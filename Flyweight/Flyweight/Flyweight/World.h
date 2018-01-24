/*
* 세계 클래스
* @file		World.h
* @date     Wed Jan 24 10:52:28 2018
* @author   keea
*/

#pragma once
#include "Terrain.h"

const int WIDTH = 10;
const int HEIGHT = 10;

class World
{
private:
	Terrain * tiles[WIDTH][HEIGHT];
	Terrain grassTerrain;
	Terrain hillTerrain;
	Terrain riverTerrain;
public:
	World();
	void GenerateTerrain();
	const Terrain& GetTile(int x, int y) const;
	const char GetTexture(int x, int y) const;
};

