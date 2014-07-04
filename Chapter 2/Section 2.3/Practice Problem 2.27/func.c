#include "func.h" 

int 
uadd_ok(unsigned x, unsigned y) {
  return ((unsigned)(x + y) > x) ? 1 : 0; 
}

int 
uadd_ok_char(unsigned char x, unsigned char y) {
  // 有错误
  /*return ((x + y) > x) ? 1 : 0; */

  // 正确
  /*unsigned char result = x + y; */
  /*return (result > x) ? 1 : 0; */

  return ((unsigned char)(x + y) > x) ? 1 : 0; 
}
