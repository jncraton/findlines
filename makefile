all: test

findlines: findlines.c
	gcc $< -Wall -Wextra -o $@

test: findlines
	cat belgic-confession.md | ./findlines Jesus | cmp belgic-jesus-lines.txt

clean:
	rm -f findlines
