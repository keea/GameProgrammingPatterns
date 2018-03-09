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
		printf("�÷��̾�� %d��ŭ ȸ���Ѵ�.\r\n", value);
	}
	else {
		printf("������ %d��ŭ ȸ���Ѵ�.\r\n", value);
	}
}

void SetWisdom(int target, int value) {
	if (target == 0) {
		printf("�÷��̾�� %d��ŭ ������ �������� �� ����.\r\n", value);
	}
	else {
		printf("������ %d��ŭ ������ �������� �� ����.\r\n", value);
	}
}

void SetAgility(int target, int value) {
	if (target == 0) {
		printf("�÷��̾�� %d��ŭ ������ �� ����.\r\n", value);
	}
	else {
		printf("������ %d��ŭ ������ �� ����.\r\n", value);
	}
}

void PlaySound(int soundId) {
	printf("%dƮ�� ���\r\n", soundId);
}

void SpawnParticles(int particleType) {
	printf("%d��° ����Ʈ�� ��������.\r\n", particleType);
}

void VM::Push(int value) {
	//���� �����÷θ� �˻��Ѵ�.
	assert(stackSize < MAX_STACK);
	stack[stackSize++] = value;
}

int VM::Pop() {
	//������ ��� ���� �ʴ��� Ȯ���Ѵ�.
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
			//�� ��ɺ��� case���� ����.
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
			//����Ʈ �ڵ忡�� ���� ����Ʈ ���� �д´�.
			int value = bytecode[++i];
			Push(value);
			break;
		}
	}
}


