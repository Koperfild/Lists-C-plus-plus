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
	list->pnext = NULL;//Необязательно. Главное реализовать обнуление в конструкторе 
}
void List::Delete(List* list)
{
	if (list == NULL) return;//Хз, может эту проверку надо делать после find но перед вызовом DeleteHuman
	if (*Head == NULL) return;
	//, _List **HeadPtr, _List **TailPtr){
	List* PrevElm = *Head;
	List* ElmForDel = 0;
	void* ValueToDel = list->value;

	while (PrevElm->pnext != 0)//Что будет если 
	{
		if (Compare(PrevElm->pnext->value, list->value) == 0){
			ElmForDel = list;
			break;
		}
		PrevElm = PrevElm->pnext;
	}
	/*if (*Head == Hum && *Head == *Tail){
	*Head = *Tail = NULL;//Обнуляем очередь
	}*/

	if (Compare((*Head)->value, list->value))//надо отладить. Случай если список состоит из одного элемента. !!!Вроде всё ок. Если список из 1 эл-та то 
	{
		*Head = (*Head)->pnext;
		if (*Head == NULL) *Tail = NULL;//Вместо этого можно и закомменченый выше if юзать
		return;
	}
	else if (ElmForDel->pnext != NULL)
	{
		PrevElm->pnext = ElmForDel->pnext;//Случай когда удаляемый элемент не последний
	}
	else if (ElmForDel == *Tail)
	{
		*Tail = PrevElm;
		PrevElm->pnext = NULL;
	}
	//Удаляем вне этого метода
	//delete ElmForDel;
}
