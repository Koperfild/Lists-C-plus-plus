#include "List.h"

/* ��������� ����� �� ������ ���� value � List � ������ ��� � ����������� ��� ������ ��� ����� ��� �����������. � ���������������� � new*/
class TIntList : public List
{
public:
	typedef struct TIntList
	{
		int value;
		TIntList* pnext;
	}TIntList;
	virtual void printList()
	{
		List* temp = *this->Head;
		while (temp != NULL){
			printf("%d\n", *(int*)temp->value);
			temp = temp->pnext;
		}
	}


	virtual int Compare(void* first, void* second)
	{
		return *(int*)first - *(int*)second;//��������� 
	}
};

