#include "func.h" 
#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 

int 
main(int argc, 
    char **argv) {
  printf("%d\n", tadd_ok(INT_MIN, -4)); 
  printf("%d\n", tadd_ok(-1, -2)); 
  printf("%d\n", tadd_ok(-1, 7)); 
  printf("%d\n", tadd_ok(INT_MAX, 20)); 

  return EXIT_SUCCESS; 
}
