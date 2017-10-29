#include"header.h"
#include"declaration.h"
int display(SNode *start)
{
	Node *l;
	int i=1;
	printf("%s:start\n",__func__);
	l=start->first;
	printf("Node %d:%d\n",i,l->info);
	while(l->next!=NULL)
	{
		l=l->next;
		i++;
		printf("Node %d:%d\n",i,l->info);
	}
	printf("\n%s:End\n",__func__);
	return 0;
}

