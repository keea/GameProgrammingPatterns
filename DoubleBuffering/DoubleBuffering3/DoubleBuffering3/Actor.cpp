/*
*
* @file		Actor.cpp
* @date     Mon Feb 12 12:38:21 2018
* @author   keea
*/

#include <stdio.h>
#include "Actor.h"

void Actor::Swap() {
	//버퍼 교체
	currentSlapped = nextSlapped;

	//다음 버퍼를 초기화.
	nextSlapped = false;
}

void Actor::Slap() {
	nextSlapped = true;
}

bool Actor::WasSlapped() {
	return currentSlapped;
}

char * Actor::GetName() {
	return name;
}
