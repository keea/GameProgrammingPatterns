/*
*
* @file		main.cpp
* @date     Mon Feb  5 15:47:57 2018
* @author   keea
*/

#include <conio.h>
#include "Game.h"

void main() {
	Game::Instance().GetAudioPlayer().Play("YERY_LOUD_BANG");

	_getch();
}