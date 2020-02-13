Findlines
=========

A program to return lines in a file matching a search query. The behavior should match `grep` when given input on `stdin` and a simple substring search.

Building and Testing
--------------------

The program can be built using `make`. Make will automatically build the binary and confirm that it performs correctly in a test searching a single file.

Assignment
----------

This program currently allocates a single, static, global buffer for processing lines. This presents a number of limitations:

- The search function will fail to properly process lines containing more than 1000 characters.
- The search function uses extra memory for files with only short lines.
- The search function is not thread safe. The program could not be extended to search multiple files simultaneously using this implementation.

You will modify the program to use a heap allocation with the following properties:

- An initial allocation of 100 bytes will be used.
- If a line is encountered that exceeds this space, a new larger space should be allocated and used instead.
- The lifetime of this heap space should not extend beyond the function invocation. All memory allocated by the function must be freed before the function returns.
