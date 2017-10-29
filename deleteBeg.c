#include"header.h"
#include"declaration.h"
int deleteBeg(SNode *start)
{
	Node *temp;
	printf("%s:start\n",__func__);
	temp=start->first->next;
	free(start->first);
	start->first=temp;
	printf("%s:End\n",__func__);
	return 0;
}

