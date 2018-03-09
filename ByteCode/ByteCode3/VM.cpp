/*
* 
* @file		VM.cpp
* @date     Fri Mar  9 10:34:04 2018
* @author   keea
*/

#include <assert.h>
#include <stdio.h>
#include "VM.h"
#include "MagicApi.h"

void SetHealth(int target, int value) {
	if (target == 0) {
		printf("플레이어는 %d만큼 회복한다.\r\n", value);
	}
	else {
		printf("상대방은 %d만큼 회복한다.\r\n", value);
	}
}

void SetWisdom(int target, int value) {
	if (target == 0) {
		printf("플레이어는 %d만큼 지식이 높아지는 것 같다.\r\n", value);
	}
	else {
		printf("상대방은 %d만큼 지식이 높아지는 것 같다.\r\n", value);
	}
}

void SetAgility(int target, int value) {
	if (target == 0) {
		printf("플레이어는 %d만큼 빨라진 것 같다.\r\n", value);
	}
	else {
		printf("상대방은 %d만큼 빨라진 것 같다.\r\n", value);
	}
}

void PlaySound(int soundId) {
	printf("%d트랙 재생\r\n", soundId);
}

void SpawnParticles(int particleType) {
	printf("%d번째 이펙트가 보여진다.\r\n", particleType);
}

void VM::Push(int value) {
	//스택 오버플로를 검사한다.
	assert(stackSize < MAX_STACK);
	stack[stackSize++] = value;
}

int VM::Pop() {
	//스택이 비어 있지 않는지 확인한다.
	assert(stackSize > 0);
	return stack[--stackSize];
}

void VM::Interpret(int bytecode[], int size) {
	for (int i = 0; i < size; i++) {
		char instruction = bytecode[i];
		int amount = -1;
		int wizard = -1;
		switch (instruction)
		{
			//각 명령별로 case문이 들어간다.
		case INST_SET_HEALTH:
			amount = Pop();
			wizard = Pop();
			SetHealth(wizard, amount);
			break;
		case INST_SET_WINDOW:
			amount = Pop();
			wizard = Pop();
			SetWisdom(wizard, amount);
			break;
		case INST_SET_AGILITY:
			amount = Pop();
			wizard = Pop();
			SetAgility(wizard, amount);
			break;
		case INST_PLAY_SOUND:
			PlaySound(Pop());
			break;
		case INST_SPAWN_PARTICLES:
			SpawnParticles(Pop());
			break;
		case INST_LITERAL:
			//바이트 코드에서 다음 바이트 값을 읽는다.
			int value = bytecode[++i];
			Push(value);
			break;
		}
	}
}


