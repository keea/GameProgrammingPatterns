/*
*
* @file		main.cpp
* @date     Mon Feb 26 14:25:35 2018
* @author   keea
*/

#include <windows.h>
#include <conio.h>
#include <stdio.h>

const int FPS = 60;
const int MS_PER_FRAME = 1000 / 60;

void ProcessInput() {
	if (kbhit()) {
		char input = _getch();
		printf("%c\r\n", input);
	}
}

void Update() {
	static int num = 0;
	num += 1;
	printf("Update %d\r\n", num);
}

void Render() {
	static int num = 0;
	num += 1;
	printf("Render %d\r\n", num);
}

/*
게임이 너무 빨라지지 않는다. 다만 너무 느려지는 건 막지 못한다.
*/
void main() {
	while (true)
	{
		system("cls");
		double start = GetCurrentTime();
		ProcessInput();
		Update();
		Render();
		Sleep(start + MS_PER_FRAME - GetCurrentTime());
	}
}