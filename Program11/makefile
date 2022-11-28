math.exe: math.o stack.o
	gcc -o math.exe math.o stack.o

math.o: math.c stack.h
	gcc -c math.c
	
stack.o: stack.c stack.h
	gcc -c stack.c
	
