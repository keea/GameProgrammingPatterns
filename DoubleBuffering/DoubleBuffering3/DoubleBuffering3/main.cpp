/*
*
* @file		main.cpp
* @date     Mon Feb 12 11:36:43 2018
* @author   keea
*/

#include <stdio.h>
#include <conio.h>
#include "Stage.h"
#include "Comedian.h"
void main() {
	Stage stage;

	Comedian * harry = new Comedian("harry");
	Comedian * baldy = new Comedian("baldy");
	Comedian * chump = new Comedian("chump");

	harry->Face(baldy);
	baldy->Face(chump);
	chump->Face(harry);

	stage.Add(harry, 2);
	stage.Add(baldy, 1);
	stage.Add(chump, 0);

	harry->Slap();
	stage.Update();
	//배우 객체는 자신이 맞았다는 걸 다음 프레임에서야 알 수 있음.
	stage.Update();

	_getch();
}