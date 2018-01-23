#pragma once
#include "Command.h"
#include "Unit.h"

class MoveUnitCommand : public Command
{
private:
	Unit * unit;
	int x;
	int y;
	int beforeX;
	int beforeY;
public:
	MoveUnitCommand(Unit * _unit, int _x, int _y)
		:unit(_unit),beforeX(0), beforeY(0), x(_x), y(_y) {};

	virtual void Execute();
	virtual void Undo();
};

