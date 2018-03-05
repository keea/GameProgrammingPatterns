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
���� �ð� ���� ������� ������ ���鼭 ���� �ð��� �������� ������ ������ ������Ʈ
�� �������� �Ŀ��� �������ϰ� �ٽ� ������ ����
*/
void main() {
	double previous = GetCurrentTime();
	double lag = 0.0; //���� �ð��� �󸶳� ��������
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