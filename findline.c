#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char line[100];

int main(int argc, char ** argv) {
  if (argc != 2) {
    printf("Exactly one search parameter required\n");
    exit(1);
  }

  char * search_query = argv[1];

  while (fgets(line, sizeof(line), stdin)) {
    if (strstr(line, search_query)) {
      printf("%s", line);
    }
  }
}
