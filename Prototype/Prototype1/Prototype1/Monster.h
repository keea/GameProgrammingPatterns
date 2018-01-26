#pragma once
/*
*
* @file		Monster.h
* @date     Fri Jan 26 13:35:51 2018
* @author   keea
*/

class Monster
{
public:
	virtual ~Monster() {};
	virtual Monster* clone() = 0;
	//기타등등
};

