#include "PrintByteRepresentation.h" 

int 
main(int argc, 
    char **argv) {
  /*int x = 4; */
  /*float f = 2.0; */
  /*double d = 4.0; */
  /*show_int(x); */
  /*show_float(f); */
  /*show_double(d); */
  /*show_pointer(&x);*/
  show_int(4); 
  show_int(~4); 
  show_int(-4); 
  show_int(3); 
  show_int(-3); 
  

  int n = 4; 
  return (n > 0 && (n & (n - 1)) == 0 && n != 1); 
} 

