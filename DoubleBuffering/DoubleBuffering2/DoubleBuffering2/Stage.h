/*
*
* @file		Stage.h
* @date     Mon Feb 12 10:57:11 2018
* @author   keea
*/

#pragma once
#include "Actor.h"
class Stage
{
private:
	static const int NUM_ACTORS = 3;
	Actor * actors[NUM_ACTORS];
public:
	void Add(Actor * actor, int index);
	void Update();
};

