#pragma once
/*
*
* @file		FileSystem.h
* @date     Wed Jan 31 13:38:32 2018
* @author   keea
*/

class FileSystem
{
private:
	FileSystem();
public:
	static FileSystem& Instance();
	void Load();
};

