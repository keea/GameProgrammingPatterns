/*
*
* @file		Entity.cpp
* @date     Wed Mar  7 19:14:11 2018
* @author   keea
*/

#include "Entity.h"

double Entity::GetX() const {
	return x;
}

double Entity::GetY() const {
	return y;
}

void Entity::SetX(double x) {
	this->x = x;
}

void Entity::SetY(double y) {
	this->y = y;
}

