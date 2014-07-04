#include <stdio.h> 
#include <stdlib.h> 

int 
main(int argc, 
    char **argv) {
  unsigned zero = 0;

  zero -= 1; 

  printf("%u\n", zero); 

  return EXIT_SUCCESS; 
}
