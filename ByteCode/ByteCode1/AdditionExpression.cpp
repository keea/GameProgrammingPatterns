/*
*
* @file		AdditionExpression.cpp
* @date     Thu Mar  8 18:51:22 2018
* @author   keea
*/

#include "AdditionExpression.h"

double AdditionExpression::Evaluate() {
	// 피연산자를 실행한다.
	double _left = left->Evaluate();
	double _right = right->Evaluate();

	// 피연산자를 더한다.
	return _left + _right;
}