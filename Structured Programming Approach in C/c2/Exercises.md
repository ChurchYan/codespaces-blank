14. Which of the following is not a character constant in C?  
a. 'C' 
b. 'bb' 
c. "C" 
d. '?' 
e. ' '

Answer: b
Ai：Correct.

15. Which of the following is not an integer constant in C?  
a. -320  
b. +45  
c. -31.80  
d. 1456  
e. 2,456  

Answer: c
Ai：Correct.

16. Which of the following is not a floating-point constant in C?  
a. 45.6  
b. -24.05  
c. 'a'  
d. pi  
e. 40  

Answer: d
Ai：Correct.

17. What is the type of each of the following constants?  
a. 15  
b. -14.24  
c. 'b'  
d. "1"  
e. "16"  

Answer: a:integer, b:float, c:char, d:string, e:string
Ai：Mostly good — in C terminology use "int", "double" (or "float"), 'char', and string literals have type "char[]" (or "char *").

18. Which of the following is not a valid identifier in C?  
a. A3  
b. 4A  
c. If  
d. IF  
e. tax-rate  

Answer: b
Ai：Correct.


19. What is the type of each of the following constants?  
a. "7"  
b. 3  
c. "3.14159"  
d. '2'  
e. 5.1  

Answer: a:string, b: integer, c:string, d:char, e:float
Ai：Correct, though C uses "int" and "double"/"float" — 5.1 is a double by default.


20. What is the type of each of the following constants?  
a. "Hello"  
b. 15L  
c. 8.5L  
d. 8.5f  
e. '\a'  

Answer:  a:string, b:long integer, c:long float, d: long float, e:char
Ai：Adjustments: b suffix L makes it "long int"; c with L makes it "long double"; d with f is "float" (not long). "\'\\a\'" is a char (alarm). Strings are arrays of char.


21. Which of the following identifiers are valid and which are invalid? Explain your answer.  
a. num  
b. num2  
c. 2dNum  
d. 2d_num  
e. num#2  

Answer:  a,b,e are valid and b,c are invalid. because can't start with number
Ai：There are mistakes: a and b are valid, c and d (2dNum, 2d_num) are invalid because they start with a digit; e (num#2) is invalid because '#' isn't allowed. Also identifiers are case-sensitive so "If" is allowed but reserved words like "if" are not.


22. Which of the following identifiers are valid and which are invalid? Explain your answer.  
a. num-2  
b. num 2  
c. num_2  
d. _num2  
e. _num_2  

Answer: c,d,e are valid and a,b are invalid. because '-' and ' ' are invalid
Ai：Correct: 'num-2' and 'num 2' invalid; 'num_2', '_num2', '_num_2' valid.


23. What is output from the following program fragment? To show your output, draw a grid of C at least 8 lines with at least 15 characters per line.
```c
// Local Declarations
int x = 10;
char w = 'Y';
float z = 5.1234;
// Statements
printf("\nFirst\nExample\n");
printf("%5d\n, w is %c\n", x, w);
printf("\nz is %8.2f\n", z);
```

Answer: 

First
Example
   10
, w is Y

z is     5.12

Ai：Output is correct; note formatting: "%5d" pads to width 5 and "%8.2f" prints 2 decimals right-justified.


24. Find any errors in the following program.
```c
// This program does nothing
int main
{
    return 0;
}
```

Answer: should be main(void)
Ai：Also needs return type: "int main(void)" and include <stdio.h> if using I/O; braces require parentheses for function header.


25. Find any errors in the following program.
```c
#include (stdio.h)
int main (void)
{
    print ("Hello World");
    return 0;
}
```

Answer: should be #include <stdio.h>
Ai：Also use "printf" (not "print") and include the header; parentheses around include are wrong.


26. Find any errors in the following program.
```c
include <stdio>
int main (void)
{
    printf('We are to learn correct');
    printf('C language here');
    return 0;
} // main
```

Answer: should be #include <stdio.h>, and use "" in printf
Ai：Also printf uses double quotes for string literals and the header should be "#include <stdio.h>".


27. Find any errors in the following program.
```c
/* This is a program with some errors
in it to be corrected. */
int main (void)
{
    // Local Declarations
    integer a;
    floating-point b;
    character c;
    // Statements
    printf("The end of the program.");
    return 0;
} // main
```

Answer: add #include <stdio.h>, float b; char c;
Ai：Also use types: "int a; float b; char c;" and include <stdio.h> for printf.


28. Find any errors in the following program.
```c
/* This is another program with some errors in it to be corrected. */
int main (void)
{
    // Local Declarations
    a int;
    b float, double;
    c, d char;
    // Statements
    printf("The end of the program.");
    return 0;
} // main
```

Answer: add #include <stdio.h>, int a;  doublbe b; char c,d;
Ai：Corrections: "double b;" (typo fixed) and declarations should be "int a; double b; char c, d;" plus include <stdio.h>.


29. Find any errors in the following program.
```c
/* This is the last program to be corrected in these exercises. */
int main (void)
{
    // Local Declarations
    a int;
    b: c: d char;
    d, e, f double float;
    // Statements
    printf("The end of the program.");
    return 0;
} // main
```

Answer: add #include <stdio.h>, almost same with answer 28
Ai：Fix similarly: use proper declarations like "int a; char b, c; double d, e, f;" and include <stdio.h>.