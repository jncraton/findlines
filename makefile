all: test

findline: findline.c
	gcc findline.c -Wall -Wextra -o findline

test: findline
	cat belgic-confession.txt | ./findline Jesus | cmp belgic-jesus-lines.txt