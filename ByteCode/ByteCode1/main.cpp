/*
*
* @file		main.cpp
* @date     Thu Mar  8 18:54:33 2018
* @author   keea
*/

#include <stdio.h>
#include <conio.h>
#include "AdditionExpression.h"
#include "NumberExpression.h"

void main() 
{
	AdditionExpression add(new NumberExpression(1), new NumberExpression(2));
	printf("%0.f", add.Evaluate());
	
	_getch();
}