#include <stdio.h>
#include "Unit.h"

Unit::Unit(int _x, int _y)
{
	x = _x;
	y = _y;
}

void Unit::MoveTo(int _x, int _y)
{
	x = _x;
	y = _y;
	printf("ĳ���� ��ġ : (%d, %d)\r\n", x, y);
}

int Unit::GetX()
{
	return x;
}

int Unit::GetY()
{
	return y;
}
