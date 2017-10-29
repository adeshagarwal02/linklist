#include"header.h"
#include"declaration.h"
SNode *operation(int choice, SNode *start)
{
	int info=1001;
	printf("%s:start\n",__func__);
	switch (choice)
	{
		case 1:
			if(!start)
				start=createlinklist();
			else
				printf("Linklist alrady exit\n");
			break;
		case 2:
			if(!start)
				printf("There is no linklist\n");
			else
				insertNode(start);
			break;
		case 3:
			sortNode(start);
			break;
		case 4:
			if (!start)
                                printf("There is no linklist\n");
                        else if(start->first==NULL)
                                printf("linklist is empty\n");
                        else
				deletemenu(start);
			break;
		case 5:
			if (!start)
                                printf("There is no linklist\n");
                        else if(start->first==NULL)
                                printf("linklist is empty\n");
			else
				display(start);
			break;
		case 6:
			if (!start)
				printf("There is no linklist");
			else if(start->first == NULL)
				printf("linklist is empty\n");
			else 
				reverse(start);
			break;
		case 7:
			if (!start)
				printf("There is no linklist");
			else if(start->first == NULL)
				printf("linklist is empty\n");
			else 
				node_swap(start);
			break;
		case 0:
			exit(EXIT_SUCCESS);
	}
	printf("%s:end\n",__func__);
	return start;

}
