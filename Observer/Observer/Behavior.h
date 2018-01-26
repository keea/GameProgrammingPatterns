/*
*
* @file		Behavior.h
* @date     Wed Jan 24 13:31:05 2018
* @author   keea
*/

#pragma once
#include "Subject.h"
class Behavior : public Subject
{
public:
	void UpdateEntity(Entity & entity);
};

