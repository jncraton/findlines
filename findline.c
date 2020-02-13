#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char line[1000];

void search_file(FILE * file, char * search_query) {
  /**
  Searches `file` for lines containing `search_query` and prints matching lines
  */
  
  while (fgets(line, sizeof(line), file)) {
    if (strstr(line, search_query)) {
      printf("%s", line);
    }
  }
}

int main(int argc, char ** argv) {
  if (argc != 2) {
    printf("Exactly one search parameter required\n");
    exit(1);
  }

  search_file(stdin, argv[1]);
}
