#include <func.h> 

float sum_elements(float a[], unsigned length) {
  int i; 
  float result = 0; 

  // bugfix 
  /*for (i = 0; i <= length - 1; i++) {*/
  for (i = 0; i < length; i++) {
    result += a[i]; 
  }

  return result; 
}
