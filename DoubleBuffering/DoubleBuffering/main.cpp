/*
*
* @file		main.cpp
* @date     Fri Feb  9 12:44:38 2018
* @author   keea
*/

#include <stdio.h>
#include <conio.h>
#include "Scene.h"

void main() {
	Scene s;
	printf("\r\n첫번째 그림\r\n");
	s.Draw1();
	printf("\r\n두번째 그림\r\n");
	s.Draw2();
	_getch();
}