/*
*
* @file		VM.cpp
* @date     Fri Mar  9 11:25:07 2018
* @author   keea
*/

#include <assert.h>
#include "VM.h"
#include "MagicApi.h"
#include "Wizard.h"

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
		int npc = -1;
		int temp_a;
		int temp_b;
		int value;
		switch (instruction)
		{
			//�� ��ɺ��� case���� ����.
		case INST_SET_HEALTH:
			amount = Pop();
			npc = Pop();
			SetHealth(npc, amount);
			break;
		case INST_SET_WISDOM:
			amount = Pop();
			npc = Pop();
			SetWisdom(npc, amount);
			break;
		case INST_SET_AGILITY:
			amount = Pop();
			npc = Pop();
			SetAgility(npc, amount);
			break;
		case INST_PLAY_SOUND:
			PlaySound(Pop());
			break;
		case INST_SPAWN_PARTICLES:
			SpawnParticles(Pop());
			break;

		case INST_LITERAL:
			//����Ʈ �ڵ忡�� ���� ����Ʈ ���� �д´�.
			value = bytecode[++i];
			Push(value);
			break;

		case INST_ADD:
			temp_b = Pop();
			temp_a = Pop();
			Push(temp_a + temp_b);
			break;

		case INST_DIVIDE:
			temp_b = Pop();
			temp_a = Pop();
			Push(temp_a / temp_b);
			break;

		case INST_GET_HEALTH:
			npc = Pop();
			Push(wizards[npc].health);
			break;
		case INST_GET_WISDOM:
			npc = Pop();
			Push(wizards[npc].wisdom);
			break;
		case INST_GET_AGILITY:
			npc = Pop();
			Push(wizards[npc].agility);
			break;
		}
	}
}