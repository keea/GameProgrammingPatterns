/*
*
* @file		Game.cpp
* @date     Mon Feb  5 15:46:45 2018
* @author   keea
*/

#include "Game.h"

Game Game::instance = *new Game();

Game & Game::Instance(){
	return instance;
}

AudioPlayer & Game::GetAudioPlayer() {
	return  * audioPlayer;
}