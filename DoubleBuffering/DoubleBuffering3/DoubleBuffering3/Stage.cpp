/*
*
* @file		Stage.cpp
* @date     Mon Feb 12 12:38:34 2018
* @author   keea
*/

#include <stdio.h>
#include "Stage.h"

void Stage::Add(Actor * actor, int index) {
	actors[index] = actor;
}

void Stage::Update() {
	for (int i = 0; i < NUM_ACTORS; i++) {
		actors[i]->Update();
	}

	for (int i = 0; i < NUM_ACTORS; i++) {
		actors[i]->Swap();
	}
}