/*
*
* @file		main.cpp
* @date     Wed Jan 31 13:51:34 2018
* @author   keea
*/

#include <conio.h>
#include "FileSystem.h"

void main() {
	FileSystem::Instance().Load();
	FileSystem::Instance().Load();

	_getch();
}