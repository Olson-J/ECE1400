LogTable.exe: LogTable.o myLinkedList.o
	gcc -o LogTable.exe LogTable.o myLinkedList.o

LogTable.o: LogTable.c myLinkedList.h
	gcc -c LogTable.c
	
myLinkedList.o: myLinkedList.c myLinkedList.h
	gcc -c myLinkedList.c
	