#include "func.h" 
#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 

int 
main(int argc, 
    char **argv) {
  printf("%d\n", tadd_ok_char(-127, -4)); 
  printf("%d\n", tadd_ok_char(-1, -2)); 
  printf("%d\n", tadd_ok_char(-1, 7)); 
  printf("%d\n", tadd_ok_char(126, 20)); 

  printf("\n"); 

  printf("%d\n", tadd_ok(INT_MIN, INT_MIN)); 
  printf("%d\n", tadd_ok(INT_MIN, -4)); 
  printf("%d\n", tadd_ok(-1, -2)); 
  printf("%d\n", tadd_ok(-1, 7)); 
  printf("%d\n", tadd_ok(INT_MAX, 20)); 
  printf("%d\n", tadd_ok(INT_MAX, INT_MAX)); 

  printf("\n"); 

  printf("%d\n", tsub_ok(INT_MIN, INT_MIN)); 
  printf("%d\n", tsub_ok(INT_MIN, -4)); 
  printf("%d\n", tsub_ok(-1, -2)); 
  printf("%d\n", tsub_ok(-1, 7)); 
  printf("%d\n", tsub_ok(INT_MAX, 20)); 
  printf("%d\n", tsub_ok(INT_MAX, INT_MAX)); 

  printf("INT_MIN = %d\t -INT_MIN = %d\n", INT_MIN, (-INT_MIN)); 

  return EXIT_SUCCESS; 
}
