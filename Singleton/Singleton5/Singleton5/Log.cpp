/*
*
* @file		Log.cpp
* @date     Mon Feb  5 14:59:07 2018
* @author   keea
*/

#include <stdio.h>
#include "Log.h"

void Log::Write(char * _txt) {
	printf("%s", _txt);
}