#pragma once
#include "GameActor.h"

class Command {
private:
public:
	virtual ~Command() {};
	virtual void execute(GameActor &actor) = 0;
};