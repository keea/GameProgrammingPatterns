/*
*
* @file		PS3FileSystem.h
* @date     Wed Jan 31 14:17:33 2018
* @author   keea
*/

#pragma once
#include "FileSystem.h"
class PS3FileSystem : public FileSystem
{
public:
	virtual char * ReadFile(char * path);
	virtual void WriteFile(char * path, char * content);
};

