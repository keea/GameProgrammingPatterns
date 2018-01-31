/*
*
* @file		PS3FileSystem.cpp
* @date     Wed Jan 31 14:19:14 2018
* @author   keea
*/

#include <stdio.h>
#include "PS3FileSystem.h"

char * PS3FileSystem::ReadFile(char * path) {
	//소니의 파일 IO API를 사용한다.
	printf("PS3File Read %s\r\n", path);
	return path;
}

void PS3FileSystem::WriteFile(char * path, char * contents) {
	//소니의 파일 IO API를 사용한다.
	printf("PS3File Write %s : %s", path, contents);
}
