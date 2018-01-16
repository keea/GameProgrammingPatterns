#include "JumpCommand.h"

void JumpCommand::execute(GameActor &actor) {
	actor.Jump();
}
