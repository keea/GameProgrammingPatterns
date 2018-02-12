/*
*
* @file		Actor.cpp
* @date     Mon Feb 12 12:38:21 2018
* @author   keea
*/

#include <stdio.h>
#include "Actor.h"

void Actor::Swap() {
	//���� ��ü
	currentSlapped = nextSlapped;

	//���� ���۸� �ʱ�ȭ.
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
