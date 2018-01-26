/*
*
* @file		Ghost.cpp
* @date     Fri Jan 26 13:37:06 2018
* @author   keea
*/

#include <stdio.h>
#include "Ghost.h"



Ghost::Ghost(int _health, int _speed)
	:health(_health), speed(_speed)
{
}

Monster * Ghost::clone() {
	printf("고스트 클론\r\nHP:%d\r\nspd:%d\r\n\r\n", health, speed);
	return new Ghost(health, speed);
}
