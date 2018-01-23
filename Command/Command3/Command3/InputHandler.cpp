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
			//������ �� ĭ �������� �̵�
			int destX = unit->GetX() - 1;
			return new MoveUnitCommand(unit, destX, unit->GetY());
		}
		else if (input == 'd') {
			// ������ �� ĭ ���������� �̵�
			int destX = unit->GetX() + 1;
			return new MoveUnitCommand(unit, destX, unit->GetY());
		}
		else if (input == 'w') {
			// ������ �� ĭ ���� �̵�
			int destY = unit->GetY() + 1;
			return new MoveUnitCommand(unit, unit->GetX(), destY);
		}
		else if (input == 's') {
			// ������ �� ĭ �Ʒ��� �̵�
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
