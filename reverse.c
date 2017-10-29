#include"header.h"
#include"declaration.h"
int reverse(SNode *start)
{
	Node *cur,*prev,*nxt;
	printf("%s:Begin\n",__func__);
	prev = NULL;
	nxt = NULL;
	cur = start->first;
	while(cur)
	{
		nxt = cur->next;
		cur->next = prev;
		prev = cur;
		cur = nxt;
	}
	start->first = prev;
	printf("%s:END\n",__func__);
	return 0;
}
