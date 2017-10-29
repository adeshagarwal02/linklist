#include"header.h"
#include"declaration.h"
int node_swap(SNode *start)
{
	int n1,n2;
	int i = 1;
	Node *fp,*f,*sp,*s,*k;
	printf("%s:Begin\n",__func__);
	printf("please enter the swaping nodes\n");
	scanf("%d%d",&n1,&n2);
	fp = start->first;
	sp = start->first;
	while(fp->next)
	{
		if(i == n1-1)
		{
			f = fp->next;
			break;
		}
		fp = fp->next;
		i++;
	}
	i = 1;
	while(sp->next)
        {
                if(i == n2-1)
                {
                        s = sp->next;
                        break;
                }
                sp = sp->next;
		i++;
        }
	k = s->next;
	s->next = f->next;
	f->next = k;
	k = fp->next;
	fp->next = s;
	sp->next = k;
	printf("%s:END\n",__func__);
	return 0;
}
