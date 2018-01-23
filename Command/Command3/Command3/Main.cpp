#include <stdio.h>
#include "Unit.h"
#include "InputHandler.h"
#include "CmdList.h"

const int MAX_ARR = 10;

void main() {
	Unit * unit = new Unit(0, 0);
	InputHandler inputHandler;
	CmdList * cmdList = new CmdList(MAX_ARR);
	inputHandler.SetSeletedUnit(unit);
	inputHandler.SetCmdList(cmdList);
	

	while (true)
	{
		Command * cmd = inputHandler.handleInput();
		if (cmd) {
			cmd->Execute();
			cmdList->Add(cmd);
		}
	}
}