/* portability */

#include <stdio.h>
#include <stdlib.h>

/* If we are compiling on Windows compile these functions */
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

/* Fake readline function */
char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

/* Fake add_history function */
void add_history(char* unused) {}

/* Otherwise include the editline headers */
#else
#include <editline/readline.h>
#endif

int main(int argc, char** argv) {

  puts("Lispy Version 0.0.0.0.1. You're running on MAC");
  puts("Press Ctrl+c to Exit\n");

  while (1) {

    /* Now in either case readline will be correctly defined */
    char* input = readline("corgi: ");
    add_history(input);

    printf("No you're a %s\n", 3);
    free(input);

  }

  return 0;
}


/**
 * Q: What happens when you pass printf a variable that does
 * not match the pattern?
 * 
 * A: Trying integer on string pattern:
 * Get a warning in compilation step. When running:
 * get segmentation fault
 * 
 * Q: If _WIN32 is defined on windows.
 * What is defined for Linux or Mac?
 * 
 * A: MAC: __APPLE__, LINUX: __linux__
 */