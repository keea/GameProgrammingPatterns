#include <stdio.h>
#include "Spawner.h"

Monster * spawnGhost() {
	printf("Ghost");
	return new Ghost();
}

Monster * spawnDemon() {
	printf("Demon");
	return new Demon();
}

Monster * spawnSorcerer() {
	printf("Sorcerer");
	return new Sorcerer();
}

Spawner::Spawner(SpawnCallback _spawn)
	:spawn(_spawn)
{
}

Monster * Spawner::SpawnMonster() {
	return spawn();
}
