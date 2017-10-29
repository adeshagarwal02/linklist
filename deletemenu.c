#include"header.h"
#include"declaration.h"
int deletemenu(SNode* start)
{
	int choice;
	printf("%s:start\n",__func__);
	printf("1.______Delete at Begining____\n");
	printf("2.______Delete at END____\n");
	printf("3.______Delete at Nth____\n");
	printf("4.______Delete at Key____\n");
	scanf("%d",&choice);
	 switch (choice)
        {
                case 1:
                        deleteBeg(start);
                        break;
                case 2:
                        deleteEnd(start);
                        break;
                case 3:
                        deleteNth(start);
                        break;
                case 4:
                        deleteKey(start);
                        break;
        }

	printf("%s:End\n",__func__);
	return 0;
}

