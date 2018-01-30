/*
*
* @file		Main.cpp
* @date     Fri Jan 26 15:22:24 2018
* @author   keea
*/

#include <conio.h>
#include "Spawner.h"

void main() {
	Spawner * ghostSpawner = new Spawner(spawnGhost);
	ghostSpawner->SpawnMonster();
	delete ghostSpawner;

	Spawner * demonSpawner = new Spawner(spawnDemon);
	demonSpawner->SpawnMonster();
	delete demonSpawner;

	Spawner * sorcererSpawner = new Spawner(spawnSorcerer);
	sorcererSpawner->SpawnMonster();
	delete sorcererSpawner;

	_getch();
}