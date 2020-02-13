#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char line[100];

void search_stdin(char * search_query) {
  /**
  Searches stdin for lines containt `search_query` and prints matching lines
  */
  
  while (fgets(line, sizeof(line), stdin)) {
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

  search_stdin(argv[1]);
}
