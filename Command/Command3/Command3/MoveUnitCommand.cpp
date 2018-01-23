#include <stdio.h>
#include "MoveUnitCommand.h"

void MoveUnitCommand::Execute()
{
	//나중에 이동할 수 있도록 원래 유닛의 위치를 저장한다.
	beforeX = unit->GetX();
	beforeY = unit->GetY();
	unit->MoveTo(x, y);
}

void MoveUnitCommand::Undo()
{
	printf("\r\n명령취소\r\n");
	unit->MoveTo(beforeX, beforeY);
}

