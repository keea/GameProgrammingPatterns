#include "InputHandler.h"
#include "GameActor.h"

void main() 
{
	GameActor actor;
	InputHandler inpHandler;
	while (true)
	{
		Command * cmd = inpHandler.HandleInput();
		if (cmd) {
			cmd->execute(actor);
		}
	}
}