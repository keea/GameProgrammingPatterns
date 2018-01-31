/*
*
* @file		FileSystem.cpp
* @date     Wed Jan 31 15:44:47 2018
* @author   keea
*/

#include "PS3FileSystem.h"
#include "WillFileSystem.h"

FileSystem & FileSystem::Instance() {
#if PLATFORM == PLAYSTATION3
	static FileSystem * instance = new PS3FileSystem();
#elif PLATFORM == WII
	static FileSystem * instance = new WillFileSystem();
#endif
	return *instance;
}