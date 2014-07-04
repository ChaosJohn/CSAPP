#include "func.h" 
#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 

int 
main(int argc, 
    char **argv) {
  printf("%d\n", uadd_ok_char(5, 4)); 
  printf("%d\n", uadd_ok_char(192, 202)); 

  printf("%d\n", uadd_ok(5, 5)); 
  printf("%d\n", uadd_ok(UINT_MAX - 20, 40)); 

  return EXIT_SUCCESS; 
}
