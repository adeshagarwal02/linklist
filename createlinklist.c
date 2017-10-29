#include"header.h"
#include"declaration.h"
SNode *createlinklist()
{
	printf("%s:start\n",__func__);
	SNode *start;
	start = (SNode *)malloc(sizeof(SNode));
	start->first=NULL;
	printf("%s:End\n",__func__);
	return start;
}

