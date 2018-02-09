/*
*
* @file		Scene.h
* @date     Fri Feb  9 12:39:59 2018
* @author   keea
*/

#include <stdio.h>
#include "Scene.h"

Scene::Scene() :current(&buffers[0]), next(&buffers[1]) {}

void Scene::Draw1() {
	//buffer.Clear();
	//buffer.Draw(1, 1);
	////�̶� ���� ����̹��� �ȼ� ���۸� ��ü�� ���� �� �ִ�.
	//buffer.Draw(4, 1);
	//buffer.Draw(1, 3);
	//buffer.Draw(2, 4);
	//buffer.Draw(3, 4);
	//buffer.Draw(4, 3);

	next->Clear();
	next->Draw(1, 1);
	next->Draw(4, 1);
	next->Draw(1, 3);
	next->Draw(2, 4);
	next->Draw(3, 4);
	next->Draw(4, 3);

	Swap();
	
	Display();
}

void Scene::Draw2() {
	next->Clear();
	next->Draw(0, 0);
	next->Draw(0, 1);
	next->Draw(0, 2);
	next->Draw(0, 3);
	next->Draw(0, 4);
	next->Draw(1, 0);
	next->Draw(1, 2);
	next->Draw(1, 4);
	next->Draw(2, 0);
	next->Draw(2, 1);
	next->Draw(2, 2);
	next->Draw(2, 3);
	next->Draw(3, 0);
	next->Draw(3, 1);
	next->Draw(3, 2);
	next->Draw(3, 3);
	next->Draw(4, 0);
	next->Draw(4, 2);
	next->Draw(4, 4);

	Swap();

	Display();
}

Framebuffer & Scene::GetBuffer() {
	return *current;
}

void Scene::Swap() {
	//���� ����Ʈ�� �����Ѵ�.
	Framebuffer * temp = current;
	current = next;
	next = temp;
}

void Scene::Display() {
	const char * pixels = current->GetPixels();
	for (int i = 0; i < WIDTH*HEIGHT; i++) {
		printf("%c", pixels[i]);
		if ((i + 1) % WIDTH == 0)
			printf("\r\n");
	}
}