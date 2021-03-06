Practice Problem 2.26 
=====================

> You are given the assignment of writing a function that determines whether one 
  string is longer than another. You decide to make use of the string library 
  function `strlen` having the follow declaration: 

    /* Prototype for library function `strlen` */ 
    size_t strlen(const char *s); 

> Here is your first attempt at the function: 

    /* Determine whether string s is longer than string t */ 
    /* WARNING: This function is buggy */ 
    int strlonger(char *s, char *t) {
      return strlen(s) - strlen(t) > 0; 
    } 

> When you test this on some sample data, things do not seem to work quite 
  right. You investigate further and determine that data type `size_t` is defined 
  (via `typedef`) in header file `stdio.h` to be `unsigned int`. 
  * A. For what cases will this function produce an incorrect result? 

  * B. Explain how this incorrect result comes about. 

  * C. Show how to fix the code so that it will work reliably. 
