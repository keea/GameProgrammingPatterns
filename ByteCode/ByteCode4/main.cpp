/*
*
* @file		main.cpp
* @date     Fri Mar  9 10:43:28 2018
* @author   keea
*/
#include <conio.h>
#include "VM.h"
#include "MagicApi.h"

void main() {
	int byteCode[] = {
		INST_LITERAL, 0, //������ �ε���			[0]
		INST_LITERAL, 0, //������ �ε���			[0,0]
		INST_GET_HEALTH, //getHealth()			[0,45]
		INST_LITERAL, 0, //������ �ε���			[0,45,0]
		INST_GET_AGILITY, //getAgility()		[0,45,7]
		INST_LITERAL,0, //������ �ε���			[0,45,7,0]
		INST_GET_WISDOM, //getWisdom()			[0,45,7,11]
		INST_ADD, //��ø���� ������ ����			[0,45,18]
		INST_LITERAL,2, //����(������ ��)			[0,45,18,2]
		INST_DIVIDE, //��ø���� ������ ����� ��		[0,45,9]
		INST_ADD, //����� ���� ü�¿� ����			[0,54]
		INST_SET_HEALTH //����� ü������ ����		[]
	};

	VM vm;
	vm.Interpret(byteCode, sizeof(byteCode) / sizeof(int));
	_getch();
}