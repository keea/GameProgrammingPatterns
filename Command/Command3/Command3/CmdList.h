#pragma once
#include "Command.h"

class CmdList
{
private:
	int maxArr;
	int cnt;
	int curtMax;
	Command ** cmdList;
public:
	CmdList(int _maxArr);
	void Add(Command * cmd);
	void Undo();
	void Redo();
	~CmdList();
};

