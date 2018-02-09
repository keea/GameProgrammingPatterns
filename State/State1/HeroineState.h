/*
*
* @file		HeroineState.h
* @date     Tue Feb  6 12:03:49 2018
* @author   keea
*/

#pragma once
#include "Define.h"

class Heroine;

class HeroineState {
public:
	virtual ~HeroineState() {};
	virtual HeroineState* HandleInput(Heroine & heroine, Input input) { return nullptr; };
	virtual void Update(Heroine & heroine) {};
	virtual void Enter(Heroine & heroine) {};
};

