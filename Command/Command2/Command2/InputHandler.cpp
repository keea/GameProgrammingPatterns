#include <conio.h>
#include "InputHandler.h"



InputHandler::InputHandler()
{
	buttonX = new FireCommand;
	buttonZ = new JumpCommand;
}


InputHandler::~InputHandler()
{
	delete buttonX;
	delete buttonZ;
}

Command * InputHandler::HandleInput() {
	if (_kbhit) {
		char input = _getch();
		if (input == 'z')
		{
			return buttonX;
		}
		else if (input == 'x')
		{
			return buttonZ;
		}
	}

	return NULL;
}
