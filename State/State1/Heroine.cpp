/*
*
* @file		Heroine.cpp
* @date     Tue Feb  6 12:09:18 2018
* @author   keea
*/

#include <stdio.h>
#include "Heroine.h"
#include "StandingState.h"

Heroine::Heroine() {
	state_ = new StandingState();
}

void Heroine::HandleInput(Input input) {
	HeroineState * state = state_->HandleInput(*this, input);

	if (state != NULL) {
		delete state_;
		state_ = state;

		//새로운 상태의 입장 함수를 호출한다.
		state_->Enter(*this);
	}
}

void Heroine::Update() {
	state_->Update(*this);
}

void Heroine::SetGraphics(graphics grap) {
	printf("%s", grap);
}

void Heroine::SuperBomb() {
	printf("SuperBomb!!!");
}

void Heroine::SetState(HeroineState * _state) {
	state_ = _state;
}