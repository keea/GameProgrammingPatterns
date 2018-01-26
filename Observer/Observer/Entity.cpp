#include <stdio.h>
#include "Entity.h"


Entity::Entity()
{
	killMonsterNum = 0;
}

void Entity::Update() {
	killMonsterNum += 1;
	printf("Á×¿´´Ù.\r\n");
}

bool Entity::IsOverKill() const
{
	if(killMonsterNum > 9)
		return true;
	return false;
}
