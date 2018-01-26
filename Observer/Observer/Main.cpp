#include <conio.h>
#include "Behavior.h"
#include "Achievements.h"
void main() {
	Behavior behavior;
	Entity entity;
	Achievements * achievement = new Achievements;

	behavior.AddObserver(achievement);
	while (true)
	{
		if (_kbhit()) {
			_getch();
			behavior.UpdateEntity(entity);
		}
	}	
}