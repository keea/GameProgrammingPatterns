#include <stdio.h>
#include "MoveUnitCommand.h"

void MoveUnitCommand::Execute()
{
	//���߿� �̵��� �� �ֵ��� ���� ������ ��ġ�� �����Ѵ�.
	beforeX = unit->GetX();
	beforeY = unit->GetY();
	unit->MoveTo(x, y);
}

void MoveUnitCommand::Undo()
{
	printf("\r\n������\r\n");
	unit->MoveTo(beforeX, beforeY);
}

