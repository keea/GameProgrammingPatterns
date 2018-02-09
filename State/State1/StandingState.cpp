/*
*
* @file		StandingState.cpp
* @date     Wed Feb  7 11:31:58 2018
* @author   keea
*/

#include "StandingState.h"
#include "DuckingState.h"
#include "JumpingState.h"

HeroineState* StandingState::HandleInput(Heroine & heroine, Input input) {
	if (input == PRESS_Z) {
		return new JumpingState();
	}
	else if (input == PRESS_DOWN) {
		return new DuckingState();
	}
	return nullptr;
}

void StandingState::Update(Heroine & heroine) {}

void StandingState::Enter(Heroine & heroine) {
	heroine.SetGraphics(IMAGE_STAND);
}