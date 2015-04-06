#include "List.h"

/* ��������� ����� �� ������ ���� value � List � ������ ��� � ����������� ��� ������ ��� ����� ��� �����������. � ���������������� � new*/
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
		return *(int*)first - *(int*)second;//��������� 
	}
};

