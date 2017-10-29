#include"header.h"
#include"declaration.h"
int insertNode(SNode* start)
{
	int choice;
	printf("%s:start\n",__func__);
	printf("1.______Insert at Begining____\n");
	printf("2.______Insert at END____\n");
	printf("3.______Insert at Nth____\n");
	printf("4.______Insert After Key____\n");
	scanf("%d",&choice);
	 switch (choice)
        {
                case 1:
                        insertBeg(start);
                        break;
                case 2:
                        insertEnd(start);
                        break;
                case 3:
                        insertNth(start);
                        break;
                case 4:
                        insertKey(start);
                        break;
        }

	printf("%s:End\n",__func__);
	return 0;
}

