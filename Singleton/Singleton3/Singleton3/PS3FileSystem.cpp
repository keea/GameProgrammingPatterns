/*
*
* @file		PS3FileSystem.cpp
* @date     Wed Jan 31 14:19:14 2018
* @author   keea
*/

#include <stdio.h>
#include "PS3FileSystem.h"

char * PS3FileSystem::ReadFile(char * path) {
	//�Ҵ��� ���� IO API�� ����Ѵ�.
	printf("PS3File Read %s\r\n", path);
	return path;
}

void PS3FileSystem::WriteFile(char * path, char * contents) {
	//�Ҵ��� ���� IO API�� ����Ѵ�.
	printf("PS3File Write %s : %s", path, contents);
}
