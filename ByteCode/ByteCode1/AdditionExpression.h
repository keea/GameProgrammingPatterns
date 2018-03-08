/*
*
* @file		AdditionExpression.h
* @date     Thu Mar  8 18:15:40 2018
* @author   keea
*/

#pragma once
#include "Expression.h"
class AdditionExpression : public Expression
{
private:
	Expression * left;
	Expression * right;
public:
	AdditionExpression(Expression * _left, Expression * _right)
		:left(_left), right(_right) {}

	virtual double Evaluate();
};

