/*
*
* @file		Comedian.cpp
* @date     Mon Feb 12 11:34:32 2018
* @author   keea
*/

#include <stdio.h>
#include "Comedian.h"

void Comedian::Face(Actor * actor) {
	facing = actor;
}

void Comedian::Update() {
	if (WasSlapped()) {
		printf("%s�� ���͸� �¾Ҵ�.\r\n", GetName());
		printf("%s�� %s�� ������.\r\n\r\n", GetName() ,facing->GetName());
		facing->Slap();
	}
}
