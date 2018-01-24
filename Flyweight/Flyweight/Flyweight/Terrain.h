#pragma once
/*
* 지형클래스
* @file		Terrain.h
* @date     Wed Jan 24 10:42:24 2018
* @author   keea
*/

class Terrain
{
private:
	int movementCost;
	bool isWater;
	char texture;
public:
	Terrain(int _movementCost, bool _isWater, char _texture);
	int GetMovementCost() const;
	bool IsWater() const;
	const char GetTexture() const;
};

