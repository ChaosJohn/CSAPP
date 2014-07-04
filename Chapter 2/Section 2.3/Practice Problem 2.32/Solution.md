Solution
========

> if y is INT_MIN, the result will be wrong. 
> Because INT_MIN = 0x80000000, ~INT_MIN = 0x7FFFFFFF, 
> -INT_MIN = ~INT_MIN + 1 = 0x80000000 = INT_MIN 

******
