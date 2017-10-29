#include"header.h"
#include"declaration.h"
int insertEnd(SNode *start)
{
	Node *l;
	l=start->first;
	printf("%s:start\n",__func__);
	if(!start->first)
		start->first=createNode();
	else
	{		
	while(l->next)
	{
		l=l->next;
	}
		l->next=createNode();
	}
	printf("%s:End\n",__func__);
	return 0;
}

