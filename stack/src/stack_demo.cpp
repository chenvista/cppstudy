//============================================================================
// Name        : stack_demo.cpp
// Author      : ryan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MyStack.h"
using namespace std;

int main() {
	MyStack *pStack = new MyStack(5);

	pStack->push(Coordinate(1,2));  //底
	pStack->push(Coordinate(2,3));
	pStack->push(Coordinate(3,4));
	pStack->push(Coordinate(4,5));
	pStack->push(Coordinate(5,6));	//顶

	pStack->stackTraverse(true);


	pStack->stackTraverse(false);
//	pStack->clearStack();
	cout << endl;
	cout << pStack->stackLength()<<endl;

	if(pStack ->stackEmpty())
	{
		cout << "栈为空" <<endl;
	}

	if(pStack->stackFull())
	{
		cout << "栈为满" << endl;

	}

	delete pStack;
	pStack = NULL;
	return 0;
}
