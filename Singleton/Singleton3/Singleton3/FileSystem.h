/*
*
* @file		FileSystem.h
* @date     Wed Jan 31 14:14:10 2018
* @author   keea
*/

#pragma once

#define PLAYSTATION3	0
#define WII				1
#define PLATFORM		WII

class FileSystem {
private:
public:
	static FileSystem& Instance();
	virtual ~FileSystem() {};
	virtual char * ReadFile(char * path) = 0;
	virtual void WriteFile(char * path, char * contents) = 0;
protected:
	FileSystem() {};
};
