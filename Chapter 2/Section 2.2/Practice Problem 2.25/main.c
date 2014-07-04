#include "func.h" 
#include <stdio.h> 
#include <stdlib.h> 

int 
main(int argc, 
    char **argv) {
  if (argc < 2 || (argv[1][0] != '0' && atoi(argv[1]) == 0)) {
    printf("Usage: %s [length]\n", argv[0]); 
    return EXIT_FAILURE; 
  }
  
  int length = atoi(argv[1]); 
  float arrayFloat[length]; 
  int i; 
  for (i = 0; i < length; i++) {
    arrayFloat[i] = i; 
    /*printf("%f\n", arrayFloat[i]); */
  }

  /*printf("%d\n", atoi(argv[1])); */

  printf("The sum is %f. \n", sum_elements(arrayFloat, length)); 

  return EXIT_SUCCESS; 
}
