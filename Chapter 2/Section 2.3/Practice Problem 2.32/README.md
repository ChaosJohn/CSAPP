Practice Problem 2.32
=====================

> You are assigned the task of writing code for a function `tsub_ok`, with arguments 
  x and y, that will return 1 if computing x - y does not cause overflow. Having just 
  written the code for Problem 2.30, you write the following: 

    /* Determine whether arguments can be subtracted without overflow */ 
    /* WARNING: This code is buggy. */ 
    int tsub_ok(int x, int y) {
      return tadd_ok(x, -y); 
    } 

> For what values of x and y will this function give incorrect results? Writing a 
  correct version of this function is left as an exercise (Problem 2.74). 
