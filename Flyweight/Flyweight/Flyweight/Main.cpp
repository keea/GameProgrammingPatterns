/*
* Main
* @file		Main.cpp
* @date     Wed Jan 24 11:06:30 2018
* @author   keea
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "World.h"

void main() {
	srand(time(NULL));
	World w;
	w.GenerateTerrain();
	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < HEIGHT; x++) {
			printf("%c", w.GetTexture(x, y));
		}
		printf("\r\n");
	}
	_getch();
}