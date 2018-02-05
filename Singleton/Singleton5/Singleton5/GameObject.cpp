/*
*
* @file		Gameobject.cpp
* @date     Mon Feb  5 15:06:06 2018
* @author   keea
*/

#include "GameObject.h"


Log& GameObject::GetLog() {
	return log;
}

Log& GameObject::log= * new Log;