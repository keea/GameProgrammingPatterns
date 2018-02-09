/*
*
* @file		StandingState.h
* @date     Wed Feb  7 11:29:02 2018
* @author   keea
*/

#pragma once

#include "Heroine.h"
#include "HeroineState.h"
class StandingState : public HeroineState
{
public:
	virtual HeroineState* HandleInput(Heroine & heroine, Input input);
	virtual void Update(Heroine & heroine);
	virtual void Enter(Heroine & heroine);
};

