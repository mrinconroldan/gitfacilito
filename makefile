all: hello fact

hello: hello.c

fact: fact.c calcfact.c

clean:
	rm -f *.o hello fact
