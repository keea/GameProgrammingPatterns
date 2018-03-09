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
		INST_LITERAL, 0, //마법사 인덱스			[0]
		INST_LITERAL, 0, //마법사 인덱스			[0,0]
		INST_GET_HEALTH, //getHealth()			[0,45]
		INST_LITERAL, 0, //마법사 인덱스			[0,45,0]
		INST_GET_AGILITY, //getAgility()		[0,45,7]
		INST_LITERAL,0, //마법사 인덱스			[0,45,7,0]
		INST_GET_WISDOM, //getWisdom()			[0,45,7,11]
		INST_ADD, //민첩성과 지혜를 더함			[0,45,18]
		INST_LITERAL,2, //제수(나누는 수)			[0,45,18,2]
		INST_DIVIDE, //민첩성과 지혜의 평균을 냄		[0,45,9]
		INST_ADD, //평균을 현재 체력에 더함			[0,54]
		INST_SET_HEALTH //결과를 체력으로 만듬		[]
	};

	VM vm;
	vm.Interpret(byteCode, sizeof(byteCode) / sizeof(int));
	_getch();
}