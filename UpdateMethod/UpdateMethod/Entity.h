/*
*
* @file		Entity.h
* @date     Wed Mar  7 19:11:39 2018
* @author   keea
*/

#pragma once
class Entity
{
private:
	double x;
	double y;
public:
	Entity() : x(0), y(0) {};
	virtual ~Entity() {};
	virtual void Update() = 0;

	double GetX() const;
	double GetY() const;

	void SetX(double x);
	void SetY(double y);
};

