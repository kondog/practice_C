# Makefile

doller: doller.o test_doller.o franc.o test_franc.o
		cc -o doller doller.o test_doller.o franc.o test_franc.o

doller.o: doller.c
		cc -c doller.c

test_doller.o: test/test_doller.c
		cc -c test/test_doller.c -I ./

franc.o: franc.c
		cc -c franc.c

test_franc.o: test/test_franc.c
		cc -c test/test_franc.c -I ./

doller.c: doller.h
test_doller.c: doller.h
franc.c: franc.h
test_franc.c: franc.h


clean:
	@rm *.o doller
