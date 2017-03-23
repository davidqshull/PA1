all:
	gcc -o bubble-down down.c
	gcc -o bubble-up up.c

clean:
	rm -f bubble-down bubble-up
