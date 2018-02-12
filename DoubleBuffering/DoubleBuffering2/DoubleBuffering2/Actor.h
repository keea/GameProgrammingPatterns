#pragma once
/*
*
* @file		Actor.h
* @date     Mon Feb 12 10:29:41 2018
* @author   keea
*/

class Actor
{
private:
	bool slapped;
	char * name;
public:
	Actor(char * _name) : slapped(false), name(_name) {}
	virtual ~Actor() {}
	virtual void Update() = 0;
	void Reset();
	void Slap();
	bool WasSlapped();
	char * GetName();
};

