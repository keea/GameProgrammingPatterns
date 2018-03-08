/*
*
* @file		Skeleton.cpp
* @date     Wed Mar  7 19:27:04 2018
* @author   keea
*/

#include <stdio.h>
#include "Skeleton.h"

void Skeleton::Update() 
{
	double run = GetX();
	printf("skeleton 이동거리 %0.f\r\n", run);
	if (partollingLeft) {
		SetX(GetX() - 1);
		
		if (GetX() == 0)
			partollingLeft = false;
	}
	else{
		SetX(GetX() + 1);
		if (GetX() == 100)
			partollingLeft = true;
	}
}
