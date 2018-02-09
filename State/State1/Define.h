/*
*
* @file		Input.h
* @date     Tue Feb  6 12:07:27 2018
* @author   keea
*/

#pragma once

enum State
{
	STATE_STANDING,
	STATE_JUMPING,
	STATE_DUCKING,
	STATE_DIVING
};

typedef char Input;
const Input		PRESS_Z = 'z';
const Input		PRESS_X = 'x';
const Input		RELEASE_DOWN = 'c';
const Input		PRESS_DOWN = 'v';

typedef char * graphics;
const graphics IMAGE_STAND = "섰다.\r\n";
const graphics IMAGE_JUMP = "점프했다.\r\n";
const graphics IMAGE_DUCKING = "머리를 숙여 피했다.\r\n";
const graphics IMAGE_DIVE = "내려찍기.\r\n";

const int MAX_CHARGE = 3;
