/*
*
* @file
* @date     Wed Jan 31 14:35:22 2018
* @author   keea
*/

#include <stdio.h>
#include "WillFileSystem.h"

char * WillFileSystem::ReadFile(char * path) {
	//���ٵ��� ���� IO API�� ����Ѵ�.
	printf("PS3File Read %s\r\n", path);
	return path;
}

void WillFileSystem::WriteFile(char * path, char * contents) {
	//���ٵ��� ���� IO API�� ����Ѵ�.
	printf("PS3File Write %s : %s", path, contents);
}
