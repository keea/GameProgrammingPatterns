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
	printf("FileSystem ����\r\n");
}

FileSystem& FileSystem::Instance() {
	//C++ 11������ ���� �������� �ʱ�ȭ �ڵ尡 ��Ƽ������ ȯ�濡�� �� �� �� �����.
	static FileSystem * instance = new FileSystem();

	return *instance;
}

void FileSystem::Load() {
	printf("FileSystem �ε�\r\n");
}
