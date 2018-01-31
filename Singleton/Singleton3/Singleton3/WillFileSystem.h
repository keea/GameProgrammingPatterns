/*
*
* @file		WillFileSystem.h
* @date     Wed Jan 31 14:34:26 2018
* @author   keea
*/

#pragma once

#include "FileSystem.h"
class WillFileSystem : public FileSystem
{
public:
	virtual char * ReadFile(char * path);
	virtual void WriteFile(char * path, char * contents);
};

