#include <conio.h>
#include "FireCommand.h"
#include "JumpCommand.h"
#include "InputHandler.h"

InputHandler::InputHandler() {
	buttonX = new FireCommand;
	buttonZ = new JumpCommand;
}

void InputHandler::HandleInput() {
	if (_kbhit) {
		char input = _getch();
		if (input == 'z')
		{
			buttonX->execute();
		}
		else if (input == 'x') 
		{
			buttonZ->execute();
		}
	}
}

InputHandler::~InputHandler() {
	delete buttonX;
	delete buttonZ;
}