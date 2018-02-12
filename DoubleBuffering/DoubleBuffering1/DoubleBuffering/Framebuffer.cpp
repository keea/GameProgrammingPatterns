/*
*
* @file		Framebuffer.cpp
* @date     Fri Feb  9 12:37:43 2018
* @author   keea
*/

#include "Framebuffer.h"


Framebuffer::Framebuffer()
{
	Clear();
}

void Framebuffer::Clear() {
	for (int i = 0; i < WIDTH*HEIGHT; i++) {
		pixels[i] = WHITE;
	}
}

void Framebuffer::Draw(int x, int y) {
	pixels[(WIDTH * y) + x] = BLACK;
}

const char * Framebuffer::GetPixels() {
	return pixels;
}
