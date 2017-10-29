#include"header.h"
#include"declaration.h"
int insertKey(SNode *start)
{
	Node *l;
        Node *temp;
        int n;
        printf("%s:start\n",__func__);
        l=start->first;
        printf("please enter the Key Value");
        scanf("%d",&n);
        while(l->info!= n)
        {
                l=l->next;
                if(!l->next)
                {
			if(l->info==n)
			{
				break;
			}
			else
			{
                       		printf("There is no such Key value \n");
                        	return 0;
			}
                }
        }
                temp=l->next;
                l->next=createNode();
                l=l->next;
                l->next=temp;
                printf("%s:End\n",__func__);
      
	return 0;
}

