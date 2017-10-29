#include"header.h"
#include"declaration.h"
int deleteEnd(SNode *start)
{
	Node *l,*sl;
	printf("%s:start\n",__func__);
	sl=NULL;
	l=start->first;
	while(l->next)
	{
		sl=l;
		l=l->next;
	}
		free(l);
	if(sl)
		sl->next=NULL;
	else
		start->first=NULL;	
	printf("%s:End\n",__func__);
	return 0;
}

