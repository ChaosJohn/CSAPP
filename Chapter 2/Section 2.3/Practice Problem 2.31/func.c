#include "func.h" 
#include <limits.h> 
#include <stdio.h> 

int 
tadd_ok(int x, int y) {
  int sum = x + y; 
  return (sum - x == y) && (sum - y == x); 
}


