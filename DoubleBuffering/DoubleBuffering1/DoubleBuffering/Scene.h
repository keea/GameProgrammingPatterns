/*
*
* @file		Scene.h
* @date     Fri Feb  9 12:38:47 2018
* @author   keea
*/

#pragma once
#include "Framebuffer.h"
class Scene
{
private:
	Framebuffer buffer;

	Framebuffer buffers[2];
	Framebuffer * current;
	Framebuffer * next;

	void Swap();
	void Display();
public:
	Scene();
	void Draw1();
	void Draw2();
	Framebuffer & GetBuffer();

};

