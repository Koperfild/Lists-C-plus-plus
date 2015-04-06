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
	

	foo** Head;
	foo** Tail;

	void Delete(ListNode* list);
	void Insert(ListNode* list);
	virtual void printList();
	virtual int Compare(void*, void*);//Используется в Delete
};

class foo
{
public:
	foo* pnext; 
	virtual int Compare(void*, void*) abstract{};
};
//Можно запихнуть структуру внутрь класса TIntList
class ListNode : public foo
{
	ListNode(int a)
	{
		this->value = a;
		this->pnext = NULL;
	}
public:
	int value;
	int Compare(foo* first, foo* second)
	{
		return ((ListNode*)first)->value - ((ListNode*)second)->value;
	}
};