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

	stage.Add(harry, 0);
	stage.Add(baldy, 1);
	stage.Add(chump, 2);

	harry->Slap();
	stage.Update();

	printf("\r\n=========멍청한AI=========\r\n\r\n");
	stage.Add(harry, 2);
	stage.Add(baldy, 1);
	stage.Add(chump, 0);

	harry->Slap();
	stage.Update();
	

	_getch();
}