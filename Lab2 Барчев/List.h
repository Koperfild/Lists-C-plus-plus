#include "stdafx.h"

#pragma once

#include <stdio.h>

class VirtualList
{
public:
	VirtualList();
	~VirtualList();
	virtual void printList() = 0;
	virtual int Compare(void*, void*) = 0;
};

class List : public VirtualList
{
public:
	List();
	~List();
	//void* value;
	//List* pnext;
	

	void** Head;
	void** Tail;

	void Delete(ListNode* list);
	void Insert(ListNode* list);
	virtual void printList();
	virtual int Compare(void*, void*);//Используется в Delete
};

class foo
{
public:
	foo* pnext; 
};
//Можно запихнуть структуру внутрь класса TIntList
class ListNode : public foo
{
	int value;
	ListNode(int a)
	{
		this->value = a;
		this->pnext = NULL;
	}
public:
	int Compare(void* first, void* second)
	{
		return ((ListNode*)first)->value - ((ListNode*)second)->value;
	}
};