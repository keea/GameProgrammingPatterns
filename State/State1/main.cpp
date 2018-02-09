/*
*
* @file		main.cpp
* @date     Tue Feb  6 12:42:50 2018
* @author   keea
*/

#include <conio.h>
#include "Heroine.h"
void main() {
	Heroine hero;
	bool isNotEnd = true;

	while (isNotEnd)
	{
		Input input = NULL;
		if (kbhit()) {
			char c = _getch();

			switch (c)
			{
			case 'z':
				input = PRESS_Z;
				break;

			case 'x':
				input = PRESS_X;
				break;

			case 'c':
				input = RELEASE_DOWN;
				break;

			case 'v':
				input = PRESS_DOWN;
				break;

			case 'q':
				isNotEnd = false;
				break;
			}
		}

		if (input != NULL) {
			hero.HandleInput(input);
		}
	}

	_getch();
}