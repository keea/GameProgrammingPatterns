/*
*
* @file		main.cpp
* @date     Mon Feb 26 13:50:51 2018
* @author   keea
*/

#include <conio.h>
#include <stdio.h>

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
게임 실행 속도를 제어할 수 없다.
빠른 하드웨어에서는 빠르게 돌아가고, 느린 하드웨어에서는 느리게 진행.
콘텐츠, AI, 물리 계산이 많은 지역이나 레벨이 있다면, 그 부분에서만 게임이 느리게 진행.
*/
void main() {
	while (true)
	{
		ProcessInput();
		Update();
		Render();
	}
}