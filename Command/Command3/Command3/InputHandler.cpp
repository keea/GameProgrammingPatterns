#include <conio.h>
#include "InputHandler.h"
#include "MoveUnitCommand.h"


InputHandler::InputHandler()
{
}


InputHandler::~InputHandler()
{
}

void InputHandler::SetSeletedUnit(Unit * _unit)
{
	selectdUnit = _unit;
}

void InputHandler::SetCmdList(CmdList * _cmdList) {
	cmdList = _cmdList;
}

Unit * InputHandler::GetSelectedUnit()
{
	return selectdUnit;
}

Command * InputHandler::handleInput()
{
	Unit * unit = GetSelectedUnit();
	if (_kbhit) {
		char input = _getch();
		if (input == 'a') {
			//À¯´ÖÀ» ÇÑ Ä­ ¿ÞÂÊÀ¸·Î ÀÌµ¿
			int destX = unit->GetX() - 1;
			return new MoveUnitCommand(unit, destX, unit->GetY());
		}
		else if (input == 'd') {
			// À¯´ÖÀ» ÇÑ Ä­ ¿À¸¥ÂÊÀ¸·Î ÀÌµ¿
			int destX = unit->GetX() + 1;
			return new MoveUnitCommand(unit, destX, unit->GetY());
		}
		else if (input == 'w') {
			// À¯´ÖÀ» ÇÑ Ä­ À§·Î ÀÌµ¿
			int destY = unit->GetY() + 1;
			return new MoveUnitCommand(unit, unit->GetX(), destY);
		}
		else if (input == 's') {
			// À¯´ÖÀ» ÇÑ Ä­ ¾Æ·¡·Î ÀÌµ¿
			int destY = unit->GetY() - 1;
			return new MoveUnitCommand(unit, unit->GetX(), destY);
		}
		else if (input == 'z') {
			cmdList->Undo();
		}
		else if (input == 'x') {
			cmdList->Redo();
		}
	}
	return NULL;
}
