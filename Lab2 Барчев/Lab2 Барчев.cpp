// Lab2 Барчев.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "TIntList.h"
#include "List.h"

void test_TIntList();

int _tmain(int argc, _TCHAR* argv[])
{
	test_TIntList();

	return 0;
}

void test_TIntList()
{
	printf("This test tests TIntList class\n");
	TIntList* year1 = new TIntList(5);
	TIntList* year2 = new TIntList(6);
	printf("List after creation of its 1st element\n");
	year1->printList();

	printf("List after inserting 2nd element\n");
	year1->Insert(year2);
	year1->printList();

	printf("List after deletion of 1st element\n");
	year1->Delete(year1);
	year1->printList();

	printf("List after deletion of 2nd element(last)\n");
	year1->Delete(year2);
	year1->printList();

	printf("Trying to print empty List\n");
	year1->printList();
}
