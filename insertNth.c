#include"header.h"
#include"declaration.h"
int insertNth(SNode *start)
{
	Node *l,*sl;
	Node *temp;
	int n;
	int i=1;
	printf("%s:start\n",__func__);
	l=start->first;
	printf("please enter the Nth position:");
	scanf("%d",&n);
	if(n==1)
	{
		start->first=createNode();
		temp=start->first;
		temp->next=l;
	}
	else
	{
		while(i!=n)
		{
			sl=l;
			l=l->next;
			i++;
			if(!l)
			{
				printf("You put wrong position please give position whitin a linklist\n");
				printf("%s:End\n",__func__);
				return 0;
			}
		}
			temp=createNode();
			sl->next=temp;
			temp->next=l;
	}
		printf("%s:End\n",__func__);
		return 0;
}

