all: libsegfault.so exe

libsegfault.so: libsegfault.c
	gcc -g -ggdb -fPIC -rdynamic -shared -o $@ $^
exe: exe.c
	gcc -g -ggdb -L. -lsegfault -o $@ $^

clean:
	rm libsegfault.so exe
