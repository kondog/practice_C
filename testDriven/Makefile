# Makefile

doller: doller.o test_doller.o
		cc -o doller doller.o test_doller.o

doller.o: doller.c
		cc -c doller.c

test_doller.o: test/test_doller.c
			cc -c test/test_doller.c -I ./

doller.c: doller.h
test_doller.c: doller.h

clean:
	@rm *.o
