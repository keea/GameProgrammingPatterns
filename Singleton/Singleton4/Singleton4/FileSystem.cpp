/*
*
* @file		FileSystem.cpp
* @date     Thu Feb  1 14:11:45 2018
* @author   keea
*/

#include <stdio.h>
#include <assert.h>
#include "FileSystem.h"


FileSystem::FileSystem()
{
	assert(!instantiated);
	instantiated = true;
	printf("FileSystem ����\r\n");
}


FileSystem::~FileSystem()
{
	instantiated = false;
}

void FileSystem::Test() {
	printf("�׽�Ʈ\r\n");
}

bool FileSystem::instantiated = false;
