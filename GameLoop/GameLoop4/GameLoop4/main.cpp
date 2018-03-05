/*
*
* @file		main.cpp
* @date     Mon Mar  5 13:29:29 2018
* @author   keea
*/

#include <windows.h>
#include <conio.h>
#include <stdio.h>

const int FPS = 60;
const int MS_PER_UPDATE = 1000 / FPS;

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

void Render(double lag) {
	static int num = 0;
	num += 1;
	printf("Render %d\r\n", num);
}

/*
고정 시간 간격 방식으로 루프를 돌면서 실제 시간을 따라잡을 때까지 게임을 업데이트
다 따라잡은 후에는 렌더링하고 다시 루프를 실행
*/
void main() {
	double previous = GetCurrentTime();
	double lag = 0.0; //실제 시간이 얼마나 지났는지
	while (true)
	{
		double current = GetCurrentTime();
		double elapsed = current - previous;

		previous = current;

		lag += elapsed;
		ProcessInput();

		while (lag >= MS_PER_UPDATE)
		{
			Update();
			lag -= MS_PER_UPDATE;
		}
		Render(lag / MS_PER_UPDATE);
	}
}