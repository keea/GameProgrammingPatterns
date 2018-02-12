/*
*
* @file		Framebuffer.h
* @date     Fri Feb  9 12:19:49 2018
* @author   keea
*/

#pragma once
#include "Define.h"

class Framebuffer
{
private:
	char pixels[WIDTH * HEIGHT];
public:
	Framebuffer();
	
	void Clear();
	void Draw(int x, int y);
	const char * GetPixels();
};

