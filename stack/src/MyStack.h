/*
 * MyStack.h
 *
 *  Created on: Mar 4, 2017
 *      Author: ryan
 */

#ifndef MYSTACK_H_
#define MYSTACK_H_
#include "Coordinate.h"
class MyStack {
public:
	MyStack(int size);	//分配内存初始化栈空间，设定栈容量，栈顶
	~MyStack();  		//回收栈空间内存
	bool stackEmpty();	//判定栈是否为空，为空返回true,非空返回false
	bool stackFull();	//判定栈是否已满，为满返回true，不满返回false
	void clearStack();	//清空栈
	int stackLength();	//已有元素个数
	bool push(Coordinate elem);	//元素入栈，栈顶上升
	bool pop(Coordinate &elem);	//元素出栈，栈顶下降
	void stackTraverse(bool isFromButtom);	//遍历栈中所有元素

private:
	Coordinate *m_pBuffer;    //栈空间指针
	int m_iSzie;  		//栈容量
	int m_iTop;			//栈顶，栈中元素个数
};

#endif /* MYSTACK_H_ */

