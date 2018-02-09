/*
*
* @file		JumpingState.cpp
* @date     Wed Feb  7 11:42:27 2018
* @author   keea
*/

#include "JumpingState.h"
#include "StandingState.h"

HeroineState* JumpingState::HandleInput(Heroine & heroione, Input input) {
	if (input == PRESS_DOWN) {
		heroione.SetGraphics(IMAGE_DIVE);
		return new StandingState();
	}
	return nullptr;
}

void JumpingState::Update(Heroine & heroine) {

}

void JumpingState::Enter(Heroine & heroine) {
	heroine.SetGraphics(IMAGE_JUMP);
}