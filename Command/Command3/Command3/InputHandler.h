#pragma once
#include "Command.h"
#include "Unit.h"
#include "CmdList.h"

class InputHandler
{
private:
	Unit * selectdUnit;
	CmdList * cmdList;
public:
	InputHandler();
	~InputHandler();
	void SetSeletedUnit(Unit * _unit);
	void SetCmdList(CmdList * _cmdList);
	Unit * GetSelectedUnit();
	Command * handleInput();
};

