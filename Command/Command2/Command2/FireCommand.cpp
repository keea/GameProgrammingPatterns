#include "FireCommand.h"

void FireCommand::execute(GameActor &actor) {
	actor.Fire();
}
