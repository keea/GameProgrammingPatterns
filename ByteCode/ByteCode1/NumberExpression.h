/*
*
* @file		NumberExpression.h
* @date     Thu Mar  8 14:40:57 2018
* @author   keea
*/

#pragma once
#include "Expression.h"
class NumberExpression : public Expression
{
private:
	double value;
public:
	NumberExpression(double _value) :value(_value) {}
	virtual double Evaluate();
};

