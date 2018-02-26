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
���� ���� �ӵ��� ������ �� ����.
���� �ϵ������� ������ ���ư���, ���� �ϵ������� ������ ����.
������, AI, ���� ����� ���� �����̳� ������ �ִٸ�, �� �κп����� ������ ������ ����.
*/
void main() {
	while (true)
	{
		ProcessInput();
		Update();
		Render();
	}
}