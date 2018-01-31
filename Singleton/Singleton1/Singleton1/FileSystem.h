#pragma once
/*
*
* @file		FileSystem.h
* @date     Wed Jan 31 13:10:38 2018
* @author   keea
*/

class FileSystem
{
private:
	FileSystem();
	static FileSystem * instance;
public:
	static FileSystem& Instance();
	void Load();
};

