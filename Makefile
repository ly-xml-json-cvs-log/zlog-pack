test:
	gcc -o test test.c log.c -lzlog -lpthread

clean:
	rm -rf *.o  test
