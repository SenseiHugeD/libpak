#
# -*- libpak top level Makefile -*-
#


OBJS := pkg_open.o \
	pkg_close.o


all:
	gcc -c src/pkg_open.c -Iinclude -fpic
	gcc -c src/pkg_close.c -Iinclude -fpic

	gcc -shared -o libpak.so $(OBJS)


test:
	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:`pwd`
	gcc examples/test_libopen_close.c -Iinclude -L. -o test -lpak
	./test


clean:
	rm -f *.o
	rm -f *.so
	rm -f test
