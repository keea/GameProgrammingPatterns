/*
*
* @file		Wizard.h
* @date     Fri Mar  9 13:41:04 2018
* @author   keea
*/

#ifndef __WIZARD_H__
#define __WIZARD_H__

#include <stdio.h>

//마법사 구조체
struct Wizard
{
	int number;
	int health;
	int wisdom;
	int agility;
};


Wizard wizards[2] = { { 1,45,7,11 },{ 2,45,7,11 } };

void SetHealth(int target, int value) {
	printf("%d번째 마법사가 %d만큼 체력이 높아지는 것 같다.\r\n", wizards[target].number, value);
	int before = wizards[target].health;
	printf("%d -> %d\r\n\r\n", before, wizards[target].health += value);
}

void SetWisdom(int target, int value) {
	printf("%d번째 마법사가 %d만큼 지식이 높아지는 것 같다.\r\n", wizards[target].number, value);
	int before = wizards[target].wisdom;
	printf("%d -> %d\r\n\r\n", before, wizards[target].wisdom += value);
}

void SetAgility(int target, int value) {
	printf("%d번째 마법사가 %d만큼 빨라진 것 같다.\r\n", wizards[target].number, value);
	int before = wizards[target].agility;
	printf("%d -> %d\r\n\r\n", before, wizards[target].agility += value);
}

void PlaySound(int soundId) {
	printf("%d트랙 재생\r\n", soundId);
}

void SpawnParticles(int particleType) {
	printf("%d번째 이펙트가 보여진다.\r\n", particleType);
}

#endif
