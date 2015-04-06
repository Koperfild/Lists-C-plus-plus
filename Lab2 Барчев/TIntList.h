#include "List.h"

/* ¬принципе можно не делать поле value в List а делать его в наследниках уже нужным нам типом или структурами. » инициализировать в new*/
class TIntList : public List
{
public:
	TIntList(int value)
	{
		this->value = &value;
	}
	void printList() override
	{
		List* temp = *this->Head;
		while (temp != NULL){
			printf("%d\n", *(int*)temp->value);
			temp = temp->pnext;
		}
	}
	
private:
	int Compare(void* first, void* second) override
	{
		return *(int*)first - *(int*)second;//ѕроверить 
	}
};

