#include "List.h"
#include "stdafx.h"

List::List()
{
}

List::~List()
{
}

void List::Insert(List* list)
{
	if (*Head == NULL){
		*Head = list;
		*Tail = list;
	}
	else {
		(**Tail).pnext = list;
		*Tail = list;
	}
	list->pnext = NULL;//�������������. ������� ����������� ��������� � ������������ 
}
void List::Delete(List* list)
{
	if (list == NULL) return;//��, ����� ��� �������� ���� ������ ����� find �� ����� ������� DeleteHuman
	if (*Head == NULL) return;
	//, _List **HeadPtr, _List **TailPtr){
	List* PrevElm = *Head;
	List* ElmForDel = 0;
	void* ValueToDel = list->value;

	while (PrevElm->pnext != 0)//��� ����� ���� 
	{
		if (Compare(PrevElm->pnext->value, list->value) == 0){
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
