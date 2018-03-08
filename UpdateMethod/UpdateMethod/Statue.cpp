/*
*
* @file		Statue.cpp
* @date     Wed Mar  7 19:35:02 2018
* @author   keea
*/

#include <stdio.h>
#include "Statue.h"

void Statue::Update() {
	if (++_frames == _delay) {
		printf("Shoot Lightning\r\n");
	}

	//타이머 초기화
	_frames = 0;
}
