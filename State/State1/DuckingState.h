/*
*
* @file		DuckingState.h
* @date     Tue Feb  6 12:15:56 2018
* @author   keea
*/

#pragma once
#include "Heroine.h"
#include "HeroineState.h"
class DuckingState : public HeroineState
{
private:
	int chargeTime;
public:
	DuckingState() :chargeTime(0) {};
	virtual HeroineState* HandleInput(Heroine& heroine, Input input);
	virtual void Update(Heroine & heroine);
	virtual void Enter(Heroine & heroine);
};

