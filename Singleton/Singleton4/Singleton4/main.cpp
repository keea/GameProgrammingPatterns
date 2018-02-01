/*
*
* @file		main.cpp
* @date     Thu Feb  1 14:15:44 2018
* @author   keea
*/

#include <conio.h>
#include "FileSystem.h"

void main() {
	FileSystem * fileSys = new FileSystem();
	fileSys->Test();

	FileSystem * fileSys0 = new FileSystem();
	fileSys0->Test();

	_getch();
}