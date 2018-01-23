#include "CmdList.h"
#include "Command.h"

CmdList::CmdList(int _maxArr)
{
	maxArr = _maxArr;
	cnt = 0;
	curtMax = 0;
	cmdList = new Command * [maxArr];
}

void CmdList::Add(Command * cmd) {
	if (cnt > maxArr - 1) {
		for (int i = 1; i < maxArr; i++) 
		{
			cmdList[i - 1] = cmdList[i];
		}
		cmdList[maxArr - 1] = cmd;
	}
	else 
	{
		if (curtMax < maxArr) {
			curtMax += 1;
		}
		cmdList[cnt] = cmd;
		cnt += 1;
	}
}

void CmdList::Redo() {
	if (cnt < maxArr && curtMax > cnt) {
		cmdList[cnt]->Execute();
		cnt += 1;
	}
}

void CmdList::Undo() {
	if (cnt > 0) 
	{
		cnt -= 1;
		cmdList[cnt]->Undo();
	}
}

CmdList::~CmdList()
{
	delete[] cmdList;
}
