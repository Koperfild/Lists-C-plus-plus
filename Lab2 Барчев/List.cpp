
#include "stdafx.h"
#include "List.h"

VirtualList::VirtualList()
{
}


VirtualList::~VirtualList()
{
}

//List **List::Head = 0;
//List **List::Tail = 0;
List::List()
{
}

List::~List()
{
}

void List::Insert(void* listNode)
{
	if (*Head == NULL){
		*Head = listNode;
		*Tail = listNode;
	}
	else {
		(*Tail)->pnext = listNode;
		*Tail = listNode;
	}
	//list->pnext = NULL;//�������������. ������� ����������� ��������� � ������������ 
}
void List::Delete(foo* fooItem)
{
	if (fooItem == NULL) return;//��, ����� ��� �������� ���� ������ ����� find �� ����� ������� DeleteHuman
	if (*Head == NULL) return;
	//, _List **HeadPtr, _List **TailPtr){
	foo* PrevElm = *Head;
	foo* ElmForDel = 0;
	//void* ValueToDel = list->value;

	while (PrevElm->pnext != 0)//��� ����� ���� 
	{
		if (foo::Compare(PrevElm->pnext, fooItem) == 0){
			ElmForDel = list;
			break;
		}
		PrevElm = PrevElm->pnext;
	}
	/*if (*Head == Hum && *Head == *Tail){
	*Head = *Tail = NULL;//�������� �������
	}*/

	if (Compare((*Head)->value, list->value))//���� ��������. ������ ���� ������ ������� �� ������ ��������. !!!����� �� ��. ���� ������ �� 1 ��-�� �� 
	{
		*Head = (*Head)->pnext;
		if (*Head == NULL) *Tail = NULL;//������ ����� ����� � ������������� ���� if �����
		return;
	}
	else if (ElmForDel->pnext != NULL)
	{
		PrevElm->pnext = ElmForDel->pnext;//������ ����� ��������� ������� �� ���������
	}
	else if (ElmForDel == *Tail)
	{
		*Tail = PrevElm;
		PrevElm->pnext = NULL;
	}
	//������� ��� ����� ������
	//delete ElmForDel;
}


void List::printList()
{
}

int List::Compare(void*, void*)
{
	return 1;
}
