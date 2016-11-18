all:
	gcc executor.c -o executor

run: executor
	./executor

clean:
	rm *~
