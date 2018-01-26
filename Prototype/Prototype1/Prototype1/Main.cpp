/*
*
* @file		Main.cpp
* @date     Fri Jan 26 14:49:32 2018
* @author   keea
*/

#include <conio.h>
#include "Ghost.h"
#include "Demon.h"
#include "Sorcerer.h"
#include "Spawner.h"
void main() {
	Monster * ghostPrototype = new Ghost(15, 3);
	Spawner * ghostSpawner = new Spawner(ghostPrototype);
	
	ghostSpawner->SpawnMonster();

	delete ghostSpawner;
	delete ghostPrototype;

	Monster * demonPrototype = new Demon(10, 10);
	Spawner * demonSpawner = new Spawner(demonPrototype);

	demonSpawner->SpawnMonster();

	delete demonSpawner;
	delete demonPrototype;

	Monster * sorcererPrototype = new Sorcerer(5, 5);
	Spawner * sorcererSpawner = new Spawner(sorcererPrototype);

	sorcererSpawner->SpawnMonster();

	delete sorcererSpawner;
	delete sorcererPrototype;

	_getch();
}