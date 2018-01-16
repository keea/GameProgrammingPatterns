#pragma once

#include "FireCommand.h"
#include "JumpCommand.h"

class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	Command * HandleInput();
private:
	Command * buttonZ;
	Command * buttonX;
};

