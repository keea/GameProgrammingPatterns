#pragma once
class Unit
{
private:
	int x, y;
public:
	Unit(int _x, int _y);
	void MoveTo(int _x, int _y);
	int GetX();
	int GetY();
};

