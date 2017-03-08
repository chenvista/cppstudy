/*
 * List.h
 *
 *  Created on: Mar 8, 2017
 *      Author: ryan
 */

#ifndef LIST_H_
#define LIST_H_

class List {
public:
	List(int size);   //创建线性表
	~List();			//销毁线性表
	void ClearList();  	//清空线性表
	bool ListEmpty();	//判断线性表是否为空
	int ListLength();	//获取线性表长度
	bool GetElem(int i,int *e);		//获取指定元素
	int LocateElem(int *e);			//寻找第一个满足e的数据元素的位序
	bool PriorElem(int *currentElem,int *preElem);  //获取指定元素的前驱
	bool NextElem(int *currentElem,int *nextElem);  //获取指定元素的后驱
	void ListTraverse();						//遍历线性表
	bool ListInsert(int i,int *e);				//在第i个位置插入元素
	bool ListDelete(int i,int *e);				//删除第i个位置的元素
private:
	int *m_pList;
	int m_iSize;
	int m_iLength;
};

#endif /* LIST_H_ */
