#include"header.h"
#include"declaration.h"
int deleteNth(SNode *start)
{
	Node *l,*sl;
	int n,i=0;
	printf("%s:start\n",__func__);
	l=start->first;
	sl=NULL;
	printf("Please enter your Nth position:");
	scanf("%d",&n);
	if(n>0)
	{	
		while(i<n-1)
		{
			sl=l;
			l=l->next;
			if(!l)
			{
				 printf("There is no %dth Node present to delete\n",n);
				return 0;
			}
			i++;
		}
		if(sl)
		{
			sl->next=l->next;
			free(l);
		}
		else 
		{
			l=l->next;
			free(start->first);
			start->first=l;
		}
	}
	else
		printf("Nth position should be in positive\n");
		printf("%s:End\n",__func__);
		return 0;
}

