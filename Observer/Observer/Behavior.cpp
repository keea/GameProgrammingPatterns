#include "Behavior.h"

void Behavior::UpdateEntity(Entity& entity) {
	entity.Update();
	Notify(entity, EVENT_ENTITY_FELL);
}