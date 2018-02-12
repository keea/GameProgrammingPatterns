/*
*
* @file		Actor.cpp
* @date     Mon Feb 12 10:31:35 2018
* @author   keea
*/

#include <stdio.h>
#include "Actor.h"

void Actor::Reset() {
	slapped = false;
}

void Actor::Slap() {
	slapped = true;
}

bool Actor::WasSlapped() {
	return slapped;
}

char * Actor::GetName() {
	return name;
}
