/*
*
* @file		FileSystem.cpp
* @date     Wed Jan 31 13:48:21 2018
* @author   keea
*/

#include <stdio.h>
#include "FileSystem.h"



FileSystem::FileSystem()
{
	printf("FileSystem 생성\r\n");
}

FileSystem& FileSystem::Instance() {
	//C++ 11에서는 정적 지역변수 초기화 코드가 멀티스레드 환경에서 딱 한 번 실행됨.
	static FileSystem * instance = new FileSystem();

	return *instance;
}

void FileSystem::Load() {
	printf("FileSystem 로드\r\n");
}
