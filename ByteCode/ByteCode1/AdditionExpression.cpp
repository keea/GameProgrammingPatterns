/*
*
* @file		AdditionExpression.cpp
* @date     Thu Mar  8 18:51:22 2018
* @author   keea
*/

#include "AdditionExpression.h"

double AdditionExpression::Evaluate() {
	// �ǿ����ڸ� �����Ѵ�.
	double _left = left->Evaluate();
	double _right = right->Evaluate();

	// �ǿ����ڸ� ���Ѵ�.
	return _left + _right;
}