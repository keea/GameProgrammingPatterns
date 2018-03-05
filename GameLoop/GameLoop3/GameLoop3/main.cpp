/*
*
* @file		main.cpp
* @date     Tue Feb 27 13:32:16 2018
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

void Update(double elapsed) {
	static int num = 0;
	num += elapsed;

	printf("Update %d\r\n", num);
}

void Render() {
	static int num = 0;
	num += 1;
	printf("Render %d\r\n", num);
}

/*
매 프레임마다 이전 게임 업데이트 이후 실제 시간이 얼마나 지났는지를 elapsed에 저장.
게임 상태 업데이트를 할 때 elapsed를 같이 넘겨주면 받는 쪽에서는 지난 시간 만큼 게임 월드 진행.
PC에 따라 결과값에 오차가 생길 수 있으며, 같은 총알의 위치가 달라진다.
*/
void main() {
	double lastTime = GetCurrentTime();

	while (true)
	{
		system("cls");
		double current = GetCurrentTime();
		double elapsed = current - lastTime;
		ProcessInput();
		Update(elapsed);
		Render();
		lastTime = current;
	}
}