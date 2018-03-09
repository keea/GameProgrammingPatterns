/*
*
* @file		main.cpp
* @date     Fri Mar  9 10:43:28 2018
* @author   keea
*/
#include <conio.h>
#include "MagicApi.h"
#include "VM.h"
void main() {
	int byteCode[] = {
		INST_LITERAL,
		0,
		INST_LITERAL,
		100,
		INST_SET_HEALTH
	};

	VM vm;
	vm.Interpret(byteCode, sizeof(byteCode) / sizeof(int));
	_getch();
}