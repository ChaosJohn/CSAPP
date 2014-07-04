#include "func.h" 
#include <limits.h> 
#include <stdio.h> 

int 
tadd_ok(int x, int y) {
  if ((int)(x + y) < 0 && x > 0 && y > 0) {
    return 0; 
  } else if ((int)(x + y) > 0 && (x > 0 || y > 0)) {
    return 1; 
  } else if ((int)(x + y) < 0 && (x < 0 || y < 0)) {
    return 1; 
  } else if ((int)(x + y) > 0 && x < 0 && y < 0) {
    return 0; 
  }
  return 0; 
}


/* 
 * 这种办法是先用一个更多字长的数据类型保存x和y的求和
 * 然后比较
 * 但是当x和y都为int型，并且是32位机时候，就不行了
 * */
int 
tadd_ok_char_origin(char x, char y) {
  int result = x + y; 
  /*printf("%d\n", result); */
  if (result >= CHAR_MAX + 1) {
    return 0; 
  } else if (result >= CHAR_MIN && result < CHAR_MAX + 1) {
    return 1; 
  } else if (result < CHAR_MIN) {
    return 0; 
  }
  return 0; 
}

int 
tadd_ok_char(char x, char y) {
  if ((char)(x + y) < 0 && x > 0 && y > 0) {
    return 0; 
  } else if ((char)(x + y) > 0 && (x > 0 || y > 0)) {
    return 1; 
  } else if ((char)(x + y) < 0 && (x < 0 || y < 0)) {
    return 1; 
  } else if ((char)(x + y) > 0 && x < 0 && y < 0) {
    return 0; 
  }
  return 0; 
}

int 
tsub_ok_error(int x, int y) {
  return tadd_ok(x, -y); 
}

int 
tsub_ok(int x, int y) {
  if (INT_MIN == y) {
    return tadd_ok(tadd_ok(x, INT_MAX), 1); 
  }
  return tadd_ok(x, -y); 
}
