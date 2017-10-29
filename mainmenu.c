#include"header.h"
#include"declaration.h"
int mainmenu()
{
	int choice;
	printf("%s:start\n",__func__);
	printf("___Main Meanu___\n");	
	printf("1.___Create Linklist__\n");
	printf("2.___InsertNode__\n");
	printf("3.___sortlinklist___\n");
	printf("4.___DeleteNode__\n");
	printf("5.___Display__\n");
	printf("6.___Reverse__\n");
	printf("7.___Node_swap__\n");
	printf("0.___Exit Linklist__\n");
	scanf("%d",&choice);
	printf("%s:End\n",__func__);
	return choice;
}

