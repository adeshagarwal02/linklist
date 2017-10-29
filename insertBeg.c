#include"header.h"
#include"declaration.h"
int insertBeg(SNode *start)
{
	Node *l;
	l=createNode();
	printf("%s:start\n",__func__);
	l->next=start->first;
	start->first=l;
	printf("%s:End\n",__func__);
	return 0;
}

