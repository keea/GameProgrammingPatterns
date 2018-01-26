/*
*
* @file		Sorcerer.cpp
* @date     Fri Jan 26 13:39:01 2018
* @author   keea
*/

#include <stdio.h>
#include "Sorcerer.h"



Sorcerer::Sorcerer(int _health, int _speed)
	:health(_health), speed(_speed)
{
}

Monster * Sorcerer::clone() {
	printf("�Ҽ��� Ŭ��\r\nHP:%d\r\nspd:%d\r\n\r\n", health, speed);
	return new Sorcerer(health, speed);
}
