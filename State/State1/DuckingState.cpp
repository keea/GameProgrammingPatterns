/*
*
* @file		DuckingState.cpp
* @date     Tue Feb  6 12:22:37 2018
* @author   keea
*/

#include "DuckingState.h"
#include "StandingState.h"

HeroineState* DuckingState::HandleInput(Heroine & heroine, Input input) {
	if (input == RELEASE_DOWN) {
		//일어선 상태로 바꾼다...
		return new StandingState();
	}

	return nullptr;
}

void DuckingState::Update(Heroine & heroine) {
	chargeTime++;

	if (chargeTime > MAX_CHARGE) {
		heroine.SuperBomb();
	}
}

void DuckingState::Enter(Heroine & heroine) {
	heroine.SetGraphics(IMAGE_DUCKING);
}