/*
*
* @file		Observer.h
* @date     Wed Jan 24 12:58:00 2018
* @author   keea
*/

#pragma once
#include <conio.h>
#include "Entity.h"
#include "Event.h"
class Observer
{
	friend class Subject; //observer에서 friend클래스로 정의
private:
	Observer * next;
public:
	Observer() :next(NULL) {};
	virtual ~Observer() {};
	virtual void OnNotify(const Entity& entity, Event event) = 0;
};