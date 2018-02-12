/*
*
* @file		Stage.cpp
* @date     Mon Feb 12 11:29:09 2018
* @author   keea
*/

#include <stdio.h>
#include "Stage.h"

void Stage::Add(Actor * actor, int index) {
	actors[index] = actor;
}

void Stage::Update() {
	for (int i = 0; i < NUM_ACTORS; i++) {
		printf("%s가 따귀를 맞았다.\r\n", actors[i]->GetName());
		actors[i]->Update();
		actors[i]->Reset();
	}
}