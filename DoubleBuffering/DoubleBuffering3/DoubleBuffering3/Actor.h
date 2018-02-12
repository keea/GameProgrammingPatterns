#pragma once
/*
*
* @file		Actor.h
* @date     Mon Feb 12 12:32:44 2018
* @author   keea
*/

class Actor
{
private:
	bool currentSlapped;
	bool nextSlapped;
	char * name;
public:
	Actor(char * _name) : currentSlapped(false), name(_name) {}
	virtual ~Actor() {}
	virtual void Update() = 0;

	void Swap();
	void Slap();
	bool WasSlapped();
	char * GetName();
};

