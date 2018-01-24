/*
* 지형클래스
* @file		Terrain.cpp
* @date     Wed Jan 24 10:46:20 2018
* @author   keea
*/

#include "Terrain.h"

Terrain::Terrain(int _movementCost, bool _isWater, char _texture)
	:movementCost(_movementCost), isWater(_isWater), texture(_texture)
{
}

int Terrain::GetMovementCost() const
{
	return movementCost;
}

bool Terrain::IsWater() const
{
	return isWater;
}

const char Terrain::GetTexture() const
{
	return texture;
}
