/*
*
* @file		main.cpp
* @date     Tue Jan 30 13:28:55 2018
* @author   keea
*/

#include <conio.h>
#include "SpawnerFor.h"
#include "Ghost.h"
#include "Sorcerer.h"
#include "Demon.h"
void main() {
	Spawner * ghostSpawner = new SpawnerFor<Ghost>();
	ghostSpawner->SpawnMonster();
	delete ghostSpawner;

	Spawner * demonSpawner = new SpawnerFor<Demon>();
	for(int i=0; i<3; i++)
		demonSpawner->SpawnMonster();
	delete demonSpawner;

	Spawner * sorcererSpawner = new SpawnerFor<Sorcerer>();
	sorcererSpawner->SpawnMonster();
	delete sorcererSpawner;

	_getch();
}