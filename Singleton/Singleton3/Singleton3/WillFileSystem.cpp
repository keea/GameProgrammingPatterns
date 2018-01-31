/*
*
* @file
* @date     Wed Jan 31 14:35:22 2018
* @author   keea
*/

#include <stdio.h>
#include "WillFileSystem.h"

char * WillFileSystem::ReadFile(char * path) {
	//닌텐도의 파일 IO API를 사용한다.
	printf("PS3File Read %s\r\n", path);
	return path;
}

void WillFileSystem::WriteFile(char * path, char * contents) {
	//닌텐도의 파일 IO API를 사용한다.
	printf("PS3File Write %s : %s", path, contents);
}
