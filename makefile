#! /bin/bash
ll: linklist.o mainmenu.o operation.o createlinklist.o display.o createNode.o insertBeg.o insertEnd.o insertKey.o insertNode.o insertNth.o sortNode.o deletemenu.o deleteEnd.o deleteKey.o deleteBeg.o deleteNth.o reverse.o node_swap.o
	gcc -o ll linklist.o mainmenu.o operation.o createlinklist.o display.o createNode.o insertBeg.o insertEnd.o insertKey.o insertNode.o insertNth.o sortNode.o deleteEnd.o deleteKey.o deleteBeg.o deleteNth.o deletemenu.o reverse.o node_swap.o
linklist.o:linklist.c declaration.h header.h
	gcc -c linklist.c

deletemenu.o:deletemenu.c declaration.h header.h
	gcc -c deletemenu.c

mainmenu.o:mainmenu.c declaration.h header.h
	gcc -c mainmenu.c

operation.o:operation.c declaration.h header.h
	gcc -c operation.c

createlinklist.o:createlinklist.c declaration.h header.h
	gcc -c createlinklist.c

sortNode.o:sortNode.c declaration.h header.h
	gcc -c sortNode.c
 
display.o:display.c declaration.h header.h
	gcc -c display.c

createNode.o:createNode.c declaration.h header.h
	gcc -c createNode.c

insertBeg.o:insertBeg.c declaration.h header.h
	gcc -c insertBeg.c

insertEnd.o:insertEnd.c declaration.h header.h
	gcc -c insertEnd.c

insertKey.o:insertKey.c declaration.h header.h
	gcc -c insertKey.c

insertNode.o:insertNode.c declaration.h header.h
	gcc -c insertNode.c
 
insertNth.o:insertNth.c declaration.h header.h
	gcc -c  insertNth.c
deleteBeg.o:deleteBeg.c declaration.h header.h
	gcc -c deleteBeg.c
deleteEnd.o:deleteEnd.c declaration.h header.h
	gcc -c deleteEnd.c
deleteKey.o:deleteKey.c declaration.h header.h
	gcc -c deleteKey.c
deleteNth.o:deleteNth.c declaration.h header.h
	gcc -c deleteNth.c
reverse.o:reverse.c declaration.h header.h
	gcc -c reverse.c
node_swap.o:node_swap.c declaration.h header.h
	gcc -c node_swap.c

clean:
	rm *.o
