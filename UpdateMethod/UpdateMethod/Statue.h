/*
*
* @file		Statue.h
* @date     Wed Mar  7 19:32:41 2018
* @author   keea
*/

#pragma once
#include "Entity.h"
class Statue : public Entity
{
private:
	int _frames;
	int _delay;

public:
	Statue(int delay) :_frames(0), _delay(delay) {};
	virtual void Update();
};

