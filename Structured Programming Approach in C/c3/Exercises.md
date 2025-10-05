14. Which of the following is not a character constant in C? 
a. 'C' 
b. 'bb' 
c. "C" 
d. '?' 
e. ' '

15. Which of the following is not an integer constant in C?  
a. -320  
b. +45  
c. -31.80  
d. 1456  
e. 2,456  

16. Which of the following is not a floating-point constant in C?  
a. 45.6  
b. -24.05  
c. 'a'  
d. pi  
e. 40  

17. What is the type of each of the following constants?  
a. 15  
b. -14.24  
c. 'b'  
d. "1"  
e. "16"  

18. Which of the following is not a valid identifier in C?  
a. A3  
b. 4A  
c. If  
d. IF  
e. tax-rate  

19. What is the type of each of the following constants?  
a. "7"  
b. 3  
c. "3.14159"  
d. '2'  
e. 5.1  

20. What is the type of each of the following constants?  
a. "Hello"  
b. 15L  
c. 8.5L  
d. 8.5f  
e. '\a'  

21. Which of the following identifiers are valid and which are invalid? Explain your answer.  
a. num  
b. num2  
c. 2dNum  
d. 2d_num  
e. num#2  

22. Which of the following identifiers are valid and which are invalid? Explain your answer.  
a. num-2  
b. num_2  
c. num_2  
d. _num2  
e. _num_2  

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

24. Find any errors in the following program.
```c
// This program does nothing
int main
{
    return 0;
}
```

25. Find any errors in the following program.
```c
#include <stdio.h>
int main (void)
{
    print ("Hello World");
    return 0;
}
```

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

**Problems**

30. Code the variable declarations for each of the following:
a. a character variable named option
b. an integer variable, sum, initialized to 0
c. a floating-point variable, product, initialized to 1

31. Code the variable declarations for each of the following:
a. a short integer variable named code
b. a constant named salesTax initialized to 0.0825
c. a floating-point named sum of size double initialized to 0

32. Write a statement to print the following line. Assume the total value is contained in a variable named cost.
The sales total is: $172.53

33. Write a program that uses four print statements to print the pattern of asterisks shown below.
```
******
*****
****
***
```

34. Write a program that uses four print statements to print the pattern of asterisks shown below.
```
*
**
***
****
```

35. Write a program that uses defined constants for the vowels in the alphabet and memory constants for the even decimal digits (0, 2, 4, 6, 8). It then prints the following three lines using literal constants for the odd digits.
```
a e i o u
0 2 4 6 8
1 3 5 7 9
```

36. Write a program that defines five integer variables and initializes them to 1, 10, 100, 1000, and 10000. It then prints them on a single line separated by space characters using the decimal conversion code (%d), and on the next line with the float conversion code (%f). Note the differences between the results. How do you explain them?

37. Write a program that prompts the user to enter a quantity and a cost. The values are to be read into an integer named quantity and a float named unitPrice. Define the variables and use only one statement to read the values. After reading the values, skip one line and print each value, with an appropriate name, on a separate line.

38. Write a program that prompts the user to enter an integer and then prints the integer first as a character, then as a decimal, and finally as a float. Use separate print statements. A sample run is shown below.
```
The number as a character: K
The number as a decimal: 75
The number as a float: 0.000000
```

39. Write a C program using printf statements to print the three first letters of your first name in big blocks. This program does not read anything from the keyboard. Each letter is formed using seven rows and five columns using the letter itself. For example, the letter B is formed using 17 b's, as shown below as part of the initials BEF.
```
BBBB   EEEEE  FFFFF
B   B  E       F
B   B  E       F
BBBB   EEEE    FFF
B   B  E       F
B   B  E       F
BBBB   EEEEE   F
```
This is just an example. Your program must print the first three letters of your first name. Design your print statements carefully to create enough blank lines at the beginning and end to make your initials readable. Use comments in your program to enhance readability as shown in this chapter.

40. Write a program that reads a character, an integer, and a floating-point number. It then prints the character, first using a character format specification (%c) and then using an integer specification (%d). After printing the character, it prints the integer and floating-point numbers on separate lines. Be sure to provide complete instructions (prompts) for the user.

41. Write a program that prompts the user to enter three numbers and then prints them vertically (each on one line), first forward and then reversed (the last one first), as shown in the following design.

Please enter three numbers: 15 35 72 Your numbers forward:
15
35
72
Your numbers reversed:
72
35
15

42. Write a program that reads 10 integers and prints the first and the last on one line, the second and the ninth on the next line, the third and the eighth on the next line, and so forth. Sample input and the results are shown below.

Please enter 10 numbers:
10 31 2 73 24 65 6 87 18 9
Your numbers are:
10 9
31 18
2 87
73 6
24 65

43. Write a program that reads nine integers and prints them three in a line separated by commas as shown below.

Input
10 31 2 73 24 65 6 87 18
Output
10, 31, 2
73, 24, 65
6, 87, 18