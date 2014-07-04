Practice Problem 2.31 
=====================

> Your coworker gets impatient with your analysis of the overflow conditions for 
  two's-complement addition and presents you with the following implementation 
  of `tadd_ok`: 

    /* Determine whether arguments can be added without overflow */ 
    int tadd_ok(int x, int y) {
      int sum = x + y; 
      return (sum - x == y) && (sum -y == x); 
    } 

> You look at the code and laugh. Explain why. 
