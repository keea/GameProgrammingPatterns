/*
*
* @file		Comedian.cpp
* @date     Mon Feb 12 11:34:32 2018
* @author   keea
*/

#include <stdio.h>
#include "Comedian.h"

void Comedian::Face(Actor * actor) {
	facing = actor;
}

void Comedian::Update() {
	if (WasSlapped()) {
		printf("%s는 %s를 때린다.\r\n\r\n", GetName() ,facing->GetName());
		facing->Slap();
	}
}
