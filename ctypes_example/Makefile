all: foo


foo: foo.o
	gcc foo.o -shared -o libfoo.so

foo.o: foo.c
	gcc -c -fPIC foo.c -o foo.o
