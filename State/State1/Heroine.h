/*
*
* @file		Heroine.h
* @date     Tue Feb  6 12:06:28 2018
* @author   keea
*/

#pragma once
#include "Define.h"

#include "HeroineState.h"

class Heroine
{
private:
	HeroineState * state_;
public:
	Heroine();
	virtual void HandleInput(Input input);
	virtual void Update();
	void SetGraphics(graphics grap);
	void SuperBomb();
	void SetState(HeroineState * _state);
};

