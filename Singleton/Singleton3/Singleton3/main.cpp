/*
*
* @file		main.cpp
* @date     Wed Jan 31 15:53:28 2018
* @author   keea
*/

#include <conio.h>
#include "FileSystem.h"
void main() {
	char * path = FileSystem::Instance().ReadFile("hello");
	FileSystem::Instance().WriteFile(path,"byebye");

	_getch();
}