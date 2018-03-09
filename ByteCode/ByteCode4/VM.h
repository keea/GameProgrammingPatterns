/*
*
* @file		VM.h
* @date     Fri Mar  9 10:24:46 2018
* @author   keea
*/
#ifndef __VM_H__
#define __VM_H__

class VM
{
private:
	static const int MAX_STACK = 128;
	int stackSize;
	int stack[MAX_STACK];
public:
	VM() :stackSize(0) {}
	void Push(int value);
	int Pop();
	void Interpret(int bytecode[], int size);
};

#endif
