#pragma once
#include "Command.h"

class InputHandler
{
public:
	void HandleInput();
	InputHandler();
	~InputHandler();
private:
	Command * buttonZ;
	Command * buttonX;
};