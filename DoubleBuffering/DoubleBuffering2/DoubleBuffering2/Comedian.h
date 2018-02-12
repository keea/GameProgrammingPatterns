/*
*
* @file		Comedian.h
* @date     Mon Feb 12 11:32:42 2018
* @author   keea
*/

#pragma once
#include "Actor.h"
class Comedian : public Actor
{
private:
	Actor * facing;
public:
	Comedian(char * _name) :Actor(_name) {};
	void Face(Actor * actor);
	virtual void Update();
};

