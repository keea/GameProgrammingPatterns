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
�� �����Ӹ��� ���� ���� ������Ʈ ���� ���� �ð��� �󸶳� ���������� elapsed�� ����.
���� ���� ������Ʈ�� �� �� elapsed�� ���� �Ѱ��ָ� �޴� �ʿ����� ���� �ð� ��ŭ ���� ���� ����.
PC�� ���� ������� ������ ���� �� ������, ���� �Ѿ��� ��ġ�� �޶�����.
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