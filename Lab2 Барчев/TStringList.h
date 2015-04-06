#include "List.h"
#include "string.h"

class TStringList : public List
{
public:
	TStringList(char value)
	{
		this->value = &value;
	}
	void printList() override
	{
		List* temp = *this->Head;
		while (temp != NULL){
			printf("%s\n", (char*)temp->value);
			temp = temp->pnext;
		}
	}

private:
	int Compare(void* first, void* second) override
	{
		return strcmp((char*)first, (char*)second);//Проверить 
	}
};