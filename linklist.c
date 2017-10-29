#include"header.h"
#include"declaration.h"
int info=1001;
int main()
{
	int choice;
	SNode *start;
	start =NULL;
	printf("%s:start\n",__func__);
	while(1)
	{
		choice= mainmenu();
		start=operation(choice,start);
	}
	printf("%s:End\n",__func__);
	return 0;
}

