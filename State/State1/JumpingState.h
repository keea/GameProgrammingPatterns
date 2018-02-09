/*
*
* @file		JumpingState.h
* @date     Wed Feb  7 11:41:51 2018
* @author   keea
*/

#pragma once
#include "Heroine.h"
#include "HeroineState.h"

class JumpingState : public HeroineState
{
public:
	virtual HeroineState* HandleInput(Heroine & heroine, Input input);
	virtual void Update(Heroine & heroine);
	virtual void Enter(Heroine & heroine);
};

