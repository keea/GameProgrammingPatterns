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

	//Ÿ�̸� �ʱ�ȭ
	_frames = 0;
}
