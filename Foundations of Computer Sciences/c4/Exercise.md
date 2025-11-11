1. What is the difference between an arithmetic operation and a logical operation?
    Answer: arithmetic operation是对数值的操作, logical operation是对数位的操作
    Ai:

2. What happens to the carry from the leftmost column in the addition of integers in two’s complement format?
    Answer: 溢出, 比如正数加正数 等于负数
    Ai:

3. Can n, the bit allocation, equal 1? Why, or why not?
    Answer: 可以, 用来表示0或者1
    Ai:

4. Define the term overflow.
    Answer: 溢出, 因为bit位数限制导致数学运算出现了错误的结果
    Ai:

5. In the addition of floating-point numbers, how do we adjust the representation of numbers with different exponents?
    Answer: 将两个浮点数调整为相同指数级别然后进行数学运算, 一般是指数较小的通过尾数右移和指数较大的数字靠拢
    Ai:

6. What is the difference between a unary operation and a binary operation?
    Answer: unary接受一个参数, binary接收两个参数
    Ai:

7. Name the logical binary operations.
    Answer: 二进制逻辑运算
    Ai:

8. What is a truth table?
    Answer: 对不同的逻辑运算符如Not, And等  根据不同输入得出不同输出, 将这些数据总结起来就是truth table
    Ai:

9. What does the NOT operator do?
    Answer: 翻转bit位
    Ai:

10. When is the result of an AND operator true?
    Answer: 当两个输入都为1的时候
    Ai:

11. When is the result of an OR operator true?
    Answer: 当任意一个输入为1时
    Ai:

12. When is the result of an XOR operator true?
    Answer: 当两个输入不相同时 
    Ai:

13. Mention an important property of the AND operator discussed in this chapter.
    Answer: 只要输入有一个为0, 结果就是0
    Ai:

14. Mention an important property of the OR operator discussed in this chapter.
    Answer: 只要输入有一个1, 结果就是1
    Ai:

15. Mention an important property of the XOR operator discussed in this chapter.
    Answer: 只要输入其中一个是1, 那么输出的结果就是另一个输入的翻转
    Ai:

16. What binary operation can be used to set bits? What bit pattern should the mask have?
    Answer: Or操作符用来set bits, mask放在bit应当为1的位置
    Ai:

17. What binary operation can be used to unset bits? What bit pattern should the mask have?
    Answer: And操作符用来unset bits, mask放在bit应当为0的位置
    Ai:

18. What binary operation can be used to flip bits? What bit pattern should the mask have?
    Answer: Xor用来flip bits, mask放在需要翻转位 的位置上
    Ai:

19. What is the difference between simple and arithmetic shifts?
    Answer: simple shift不会保留符号位, arithmetic会保留符号位(溢出情况下除外)
    Ai:


1. Show the result of the following operations:
  a. NOT (99)₁₆
  b. NOT (FF)₁₆
  c. NOT (00)₁₆
  d. NOT (01)₁₆

    Answer: 66, 00, FF, FE
    Ai:


2. Show the result of the following operations:
  a. (99)₁₆ AND (99)₁₆
  b. (99)₁₆ AND (00)₁₆
  c. (99)₁₆ AND (FF)₁₆
  d. (FF)₁₆ AND (FF)₁₆

    Answer: 99, 00, 99, FF
    Ai:

3. Show the result of the following operations:
  a. (99)₁₆ OR (99)₁₆
  b. (99)₁₆ OR (00)₁₆
  c. (99)₁₆ OR (FF)₁₆
  d. (FF)₁₆ OR (FF)₁₆

    Answer: 99, 00, FF, FF
    Ai:

4. Show the result of the following operations:
  a. NOT [(99)₁₆ OR (99)₁₆]
  b. (99)₁₆ OR [NOT (00)₁₆]
  c. [(99)₁₆ AND (33)₁₆] OR [(00)₁₆ AND (FF)₁₆]
  d. (99)₁₆ OR (33)₁₆ AND [(00)₁₆ OR (FF)₁₆]

    Answer: 66, FF, 11, BB 
    Ai:

5. We need to unset (force to 0) the four leftmost bits of a pattern. Show the mask and the operation.
    Answer: And操作符 0000
    Ai:

6. We need to set (force to 1) the four rightmost bits of a pattern. Show the mask and the operation.
    Answer: Or操作符 1111
    Ai:

7. We need to flip the three rightmost and the two leftmost bits of a pattern. Show the mask and the operation.
    Answer: Xor操作符 11左侧 111右侧
    Ai:

8. We need to unset the three leftmost bits and set the two rightmost bits of a pattern. Show the masks and operations.
    Answer: 
    Ai:

9. Use the shift operation to divide an integer by 4.
    Answer: 右移两次
    Ai:

10. Use the shift operation to multiply an integer by 8.
    Answer: 左移三次
    Ai:

11. Use a combination of logical and shift operations to extract the fourth and fifth bits from the left of an unsigned integer.
    Answer: 首先右移三次, 第四第五bit分别在第一第二位, 然后使用and 符号 mask是11
    Ai:

12. Using an 8-bit allocation, first convert each of the following integers to two’s complement, do the operation, and then convert the result to decimal.
  a. 19 + 23
  b. 19 – 23
  c. –19 + 23
  d. –19 – 23

    Answer: 42, -4, 
    Ai:

13. Using a 16-bit allocation, first convert each of the following numbers to two’s complement, do the operation, and then convert the result to decimal.
  a. 161 + 1023
  b. 161 – 1023
  c. –161 + 1023
  d. –161 – 1023

    Answer: 
    Ai:

14. Which of the following operations creates an overflow if the numbers and the result are represented in 8-bit two’s complement representation?
  a. 11000010 + 00111111
  b. 00000010 + 00111111
  c. 11000010 + 11111111
  d. 00000010 + 11111111

    Answer: 
    Ai:

15. Without actually doing the calculation, can we tell which of the following creates an overflow if the numbers and the result are in 8-bit two’s complement representation?
  a. 32 + 105
  b. 32 – 105
  c. –32 + 105
  d. –32 – 105

    Answer: 
    Ai:

16. Show the result of the following operations assuming that the numbers are stored in 16-bit two’s complement representation. Show the result in hexadecimal notation.
  a. (012A)₁₆ + (0E27)₁₆
  b. (712A)₁₆ + (9E00)₁₆
  c. (8011)₁₆ + (0001)₁₆
  d. (E12A)₁₆ + (9E27)₁₆

    Answer: 
    Ai:

17. Using an 8-bit allocation, first convert each of the following numbers to sign-and-magnitude representation, do the operation, and then convert the result to decimal.
  a. 19 + 23
  b. 19 – 23
  c. –19 + 23
  d. –19 – 23

    Answer: 
    Ai:

18. Show the result of the following floating-point operations using IEEE_127—see Chapter 3.
  a. 34.75 + 23.125
  b. –12.625 + 451.00
  c. 33.1875 – 0.4375
  d. –344.3125 – 123.5625

    Answer: 
    Ai:

19. In which of the following situations does an overflow never occur? Justify the answer.
  a. Adding two positive integers.
  b. Adding one positive integer to a negative integer.
  c. Subtracting one positive integer from a negative integer.
  d. Subtracting two negative integers.

    Answer: 
    Ai:

20. What is the result of adding an integer to its one’s complement?
    Answer: 
    Ai:

21. What is the result of adding an integer to its two’s complement?
    Answer: 
    Ai:



