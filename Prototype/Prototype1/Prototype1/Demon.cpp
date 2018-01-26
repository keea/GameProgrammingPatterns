/*
*
* @file		Demon.cpp
* @date     Fri Jan 26 13:38:18 2018
* @author   keea
*/

#include <stdio.h>
#include "Demon.h"

Demon::Demon(int _health, int _speed)
	:health(_health), speed(_speed)
{
}

Monster * Demon::clone() {
	printf("데몬 클론\r\nHP:%d\r\nspd:%d\r\n\r\n",health, speed);
	return new Demon(health, speed);
}