all: test

findlines: findlines.c
	gcc $< -Wall -Wextra -o $@

test: findlines
	cat belgic-confession.txt | ./findlines Jesus | cmp belgic-jesus-lines.txt

clean:
	rm -f finelines
