/*
 * MyStack.cpp
 *
 *  Created on: Mar 4, 2017
 *      Author: ryan
 */


#include "MyStack.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int size)
{
	m_iSzie = size;
	m_pBuffer = new Coordinate[size];
	m_iTop = 0;
}


MyStack::~MyStack()
{
	delete []m_pBuffer;
}

bool MyStack::stackEmpty()
{
	if(0 == m_iTop)
	{
		return true;
	}
	return false;
}

bool MyStack::stackFull()
{
	if(m_iTop == m_iSzie) //>=
	{
		return true;
	}
	return false;
}

void MyStack::clearStack()
{
	m_iTop = 0;
}

int MyStack::stackLength()
{
	return m_iTop;
}

bool MyStack::push(Coordinate elem)
{
	if(stackFull())
	{
		return false;
	}
	m_pBuffer[m_iTop] = elem;
	m_iTop++;
	return true;
}
//char MyStack::pop()
//{
//	if(stackEmpty())
//	{
//		throw 1;
//	}
//	else
//	{
//		m_iTop--;
//		return m_pBuffer[m_iTop];
//	}
//}

bool MyStack::pop(Coordinate &elem)
{
	if(stackEmpty())
	{
		return false;
	}
	m_iTop--;
	elem = m_pBuffer[m_iTop];
	return true;
}


void MyStack::stackTraverse(bool isFromButtom)
{
	if(isFromButtom)
	{
		for(int i = 0;i < m_iTop;i++)
			{
//				cout << m_pBuffer[i] << ",";
			m_pBuffer[i].printCoordinate();
			}
	}
	else
	{
		for(int i = m_iTop-1;i>=0;i--)
			{
//				cout << m_pBuffer[i]<< ",";
			m_pBuffer[i].printCoordinate();
			}
	}

}
