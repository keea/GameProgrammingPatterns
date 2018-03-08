/*
*
* @file		Skeleton.h
* @date     Wed Mar  7 19:25:34 2018
* @author   keea
*/
#pragma once
#include "Entity.h"
class Skeleton : public Entity
{
private:
	bool partollingLeft;
public:
	Skeleton() : partollingLeft(false) {};
	virtual void Update();
};

