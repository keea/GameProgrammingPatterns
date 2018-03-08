/*
*
* @file		main.cpp
* @date     Thu Mar  8 19:42:35 2018
* @author   keea
*/
#include <conio.h>
#include "MagicApi.h"
#include "VM.h"
void main(){
	char byteCode[] = { INST_SET_HEALTH, INST_SET_WINDOW,
		INST_SET_AGILITY, INST_PLAY_SOUND, INST_SPAWN_PARTICLES };

	VM vm;
	vm.Interpret(byteCode, sizeof(byteCode) / sizeof(char));

	_getch();
}