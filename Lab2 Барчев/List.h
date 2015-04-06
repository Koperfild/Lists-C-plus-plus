#include "stdafx.h"

#pragma once

#include <stdio.h>

class List
{
public:
	List();
	~List();
	void* value;
	List* pnext;
	static List** Head;
	static List** Tail;
	void Delete(List* list);
	void Insert(List* list);
	virtual void printList();

private:
	virtual int Compare(void*, void*);//Используется в Delete
};
