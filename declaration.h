typedef struct Node
{
	int info;
	struct Node *next;	
}Node;
typedef struct SNode
{
	int memusage;
	struct Node *first;	
}SNode;
extern int info;
int mainmenu(void);
SNode *operation(int, SNode *);
SNode * createlinklist();
Node * createNode();
int insertNode(SNode *);
int deletemenu(SNode *);
int sortNode(SNode *);
int DeleteNode(SNode *);
int display(SNode *);
int insertBeg(SNode *);
int insertEnd(SNode *);
int insertNth(SNode *);
int insertKey(SNode *);
int deleteBeg(SNode *);
int deleteEnd(SNode *);
int deleteNth(SNode *);
int deleteKey(SNode *);
int reverse(SNode *);
int node_swap(SNode *);
