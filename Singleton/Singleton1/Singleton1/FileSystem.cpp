/*
*
* @file		FileSystem.cpp
* @date     Wed Jan 31 13:10:50 2018
* @author   keea
*/

#include <stdio.h>
#include "FileSystem.h"

FileSystem * FileSystem::instance = NULL;

FileSystem::FileSystem() {
	printf("FileSystem ������\r\n");
}

FileSystem& FileSystem::Instance() {
	if(instance == NULL)
		instance = new FileSystem();

	return *instance;
}

void FileSystem::Load() {
	printf("���� �ý��� �ε�\r\n");
}