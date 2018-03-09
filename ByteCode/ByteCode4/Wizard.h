/*
*
* @file		Wizard.h
* @date     Fri Mar  9 13:41:04 2018
* @author   keea
*/

#ifndef __WIZARD_H__
#define __WIZARD_H__

#include <stdio.h>

//������ ����ü
struct Wizard
{
	int number;
	int health;
	int wisdom;
	int agility;
};


Wizard wizards[2] = { { 1,45,7,11 },{ 2,45,7,11 } };

void SetHealth(int target, int value) {
	printf("%d��° �����簡 %d��ŭ ü���� �������� �� ����.\r\n", wizards[target].number, value);
	int before = wizards[target].health;
	printf("%d -> %d\r\n\r\n", before, wizards[target].health += value);
}

void SetWisdom(int target, int value) {
	printf("%d��° �����簡 %d��ŭ ������ �������� �� ����.\r\n", wizards[target].number, value);
	int before = wizards[target].wisdom;
	printf("%d -> %d\r\n\r\n", before, wizards[target].wisdom += value);
}

void SetAgility(int target, int value) {
	printf("%d��° �����簡 %d��ŭ ������ �� ����.\r\n", wizards[target].number, value);
	int before = wizards[target].agility;
	printf("%d -> %d\r\n\r\n", before, wizards[target].agility += value);
}

void PlaySound(int soundId) {
	printf("%dƮ�� ���\r\n", soundId);
}

void SpawnParticles(int particleType) {
	printf("%d��° ����Ʈ�� ��������.\r\n", particleType);
}

#endif
