output:main_code.o movement.o input.o fruit.o boundary.o
	gcc main_code.o movement.o input.o fruit.o boundary.o -o snake

movement.o:movement.c
	gcc -c movement.c

input.o:input.c
	gcc -c input.c

fruit.o:fruit.c
	gcc -c fruit.c

boundary.o:boundary.c
	gcc -c boundary.c

clean:
	rm *.o output