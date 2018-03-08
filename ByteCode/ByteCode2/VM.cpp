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


//유연하지 않다.
//매개변수를 받을 수 있어야 한다.
void VM::Interpret(char bytecode[], int size) {
	for (int i = 0; i < size; i++) {
		char instruction = bytecode[i];
		switch (instruction)
		{
			//각 명령별로 case문이 들어간다.
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


