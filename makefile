CC = gcc
FLAGS = -Wall -g

all:stringProg s d    

stringProg: main.o  libds.a 
		$(CC) $(FLAGS) -o stringProg  main.o libds.a -lm


  

s: libds.a

d : libdd.so



libds.a: main.o my_mat.o my_mat.h
	ar -rcs libds.a my_mat.o my_mat.h

libdd.so:main.o my_mat.h  my_mat.o
	$(CC) -shared -o libdd.so my_mat.h  my_mat.o



main.o:main.c my_mat.h
	$(CC) $(FLAGS) -c main.c -lm



my_mat.o: my_mat.c
	$(CC) $(FLAGS) -c my_mat.c


.PHONY:	clean all
clean:
	rm -f *.o  stringProg s d libds.a libdd.so