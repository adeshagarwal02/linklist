#include"header.h"
#include"declaration.h"
Node *createNode()
{
	Node *new;
	printf("%s:start\n",__func__);
	new = (Node *)malloc(sizeof(Node));
	new->next=NULL;
	new->info=info;
	info++;
	printf("%s:End\n",__func__);
	return new;
}

