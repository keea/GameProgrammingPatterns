/*
*
* @file		Expression.h
* @date     Thu Mar  8 14:38:59 2018
* @author   keea
*/

#pragma once

class Expression {
public:
	virtual ~Expression() {}
	virtual double Evaluate() = 0;
};
