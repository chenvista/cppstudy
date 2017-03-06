//============================================================================
// Name        : stack_demo.cpp
// Author      : ryan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MyStack.h"
#include "Coordinate.h"
using namespace std;



//int main() {
//	MyStack<Coordinate> *pStack = new MyStack<Coordinate>(5);
//
//	pStack->push(Coordinate(1,2));  //底
//	pStack->push(Coordinate(2,3));
//	pStack->push(Coordinate(3,4));
//	pStack->push(Coordinate(4,5));
//	pStack->push(Coordinate(5,6));	//顶
//
//	pStack->stackTraverse(true);
//
//
//	pStack->stackTraverse(false);
////	pStack->clearStack();
//	cout << endl;
//	cout << pStack->stackLength()<<endl;
//
//	if(pStack ->stackEmpty())
//	{
//		cout << "栈为空" <<endl;
//	}
//
//	if(pStack->stackFull())
//	{
//		cout << "栈为满" << endl;
//
//	}
//
//	delete pStack;
//	pStack = NULL;
//	return 0;
//}
//
//#define BINARY 2
//#define OCTONARy 8
//#define HEXADECIMAL 16
//
//int main(void)
//{
//	char num[] = "0123456789ABCDEF";
//	MyStack<int> *pStack = new MyStack<int>(30);
//	int N = 2017;
//	int mod = 0;
//
//	while(N != 0)
//	{
//		mod = N % HEXADECIMAL;
//		pStack->push(mod);
//		N = N / HEXADECIMAL;
//	}
//
////	pStack->stackTraverse(false);
////	for(int i = pStack->stackLength()-1;i>=0;i--)
////	{
////		num[pStack[i]]
////	}
//	int elem = 0;
//	while(!pStack->stackEmpty())
//	{
//		pStack->pop(elem);
//		cout << num[elem];
//	}
//
//	delete pStack;
//	pStack = NULL;
//	return 0;
//}
#include <string.h>

int main(void){
	MyStack<char> *pStack = new MyStack<char>(30);
	MyStack<char> *pNeedStack = new MyStack<char>(30);


	char str[]="[[()]])";
	char currentNeed = 0;
	for(int i = 0; i<strlen(str); i++)cout << "字符串括号不匹配" <<endl;
	{
		if(str[i] != currentNeed)
		{
			pStack->push(str[i]);
			switch(str[i])
			{
			case '[':
				if(currentNeed!=0)
				{
					pNeedStack->push(currentNeed);
				}
				currentNeed=']';
				break;
			case '(':
				if(currentNeed!=0)
				{
					pNeedStack->push(currentNeed);
				}
				currentNeed=')';
				break;
			default:
				cout << "字符串括号不匹配,默认" <<endl;
				return 0;
			}
		}
		else
		{
			char elem;
			pStack->pop(elem);
			if(!pNeedStack->pop(currentNeed))
			{
				currentNeed = 0;
			}
		}

	}


	if(pStack->stackEmpty())
	{
		cout << "字符串括号匹配" <<endl;
	}
	else
	{
		cout << "字符串括号不匹配" <<endl;
	}


	delete pStack;
	pStack = NULL;

	delete pNeedStack;
	pNeedStack = NULL;

	return 0;
}


