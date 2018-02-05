#pragma once
/*
*
* @file		Game.h
* @date     Mon Feb  5 15:30:28 2018
* @author   keea
*/

#include "AudioPlayer.h"
class Game
{
private:
	static Game instance;
	AudioPlayer * audioPlayer;
public:
	static Game & Instance();
	AudioPlayer & GetAudioPlayer();
};

