Practice Problem 2.25 
=====================

Consider the following code that attempts to sum the elements of an array a, where 
the number of elements is given by parameter length: 

    /* WARNING: This is buggy code */
    float sum_elements(float a[], unsigned length) {
      int i; 
      float result = 0; 

      for (i = 0; i <= length - 1; i++) 
        result += a[i]; 
      
      return result; 
    } 

When run with argument length equal to 0, this code should return 0\.0\. Instead 
it encounters a memory error. Explain why this happens. Show how this code can 
be corrected. 

