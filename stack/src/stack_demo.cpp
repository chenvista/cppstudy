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

	pStack->push('h');  //底
	pStack->push('e');
	pStack->push('l');
	pStack->push('l');
	pStack->push('o');	//顶

	pStack->stackTraverse(true);
	char elem = 0;
	pStack->pop(elem);
	cout << endl;
	cout << elem << endl;

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
