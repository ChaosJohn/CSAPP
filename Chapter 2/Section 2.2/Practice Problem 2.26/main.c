#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int strlonger(char *s, char *t) {
  int resT = strlen(s) - strlen(t); 
  unsigned resU = strlen(s) - strlen(t); 
  printf("%d %u\n", resT, resU); 
  return strlen(s) - strlen(t) > 0; 
}

int 
main(int argc, 
    char **argv) {

  if (argc != 3) {
    printf("Usage: %s [string1] [string2]\n", argv[0]); 
    return EXIT_FAILURE; 
  }

  printf("%d\n", strlonger(argv[1], argv[2])); 

  return EXIT_SUCCESS; 
}
