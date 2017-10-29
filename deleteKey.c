#include"header.h"
#include"declaration.h"
int deleteKey(SNode *start)
{
	int k;
	Node *l,*sl;
	printf("%s:start\n",__func__);
	printf("Please enter the key element:");
	scanf("%d",&k);
	l=start->first;
	sl=NULL;
	if(l->info==k)
	{
		start->first=l->next;
		free(l);
	}
	
	else
	{
		l=start->first;
		while(l->info!=k)
		{
				sl=l;
				l=l->next;
				if(!l)
			{	
				printf("There is no element %d present in linklist\n",k);
				printf("%s:End\n",__func__);
				return 0;
			}
		}
		sl->next=l->next;
		free(l);
	}

	
	printf("%s:End\n",__func__);
	return 0;
}

