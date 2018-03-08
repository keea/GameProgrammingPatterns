/*
*
* @file		VM.cpp
* @date     Thu Mar  8 19:20:16 2018
* @author   keea
*/
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


//�������� �ʴ�.
//�Ű������� ���� �� �־�� �Ѵ�.
void VM::Interpret(char bytecode[], int size) {
	for (int i = 0; i < size; i++) {
		char instruction = bytecode[i];
		switch (instruction)
		{
			//�� ��ɺ��� case���� ����.
		case INST_SET_HEALTH:
			SetHealth(0, 100);
			break;
		case INST_SET_WINDOW:
			SetWisdom(0, 100);
			break;
		case INST_SET_AGILITY:
			SetAgility(0, 100);
			break;
		case INST_PLAY_SOUND:
			PlaySound(Sound::SOUND_BANG);
			break;
		case INST_SPAWN_PARTICLES:
			SpawnParticles(Particle::PARTICLE_FLAME);
			break;
		}
	}
}


