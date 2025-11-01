## Concept questions

1. Name five types of data that a computer can process.
    Answer：1. text, 2.video, 3.picture, 4. number, 5.audio
    Ai:
2. How is bit pattern length related to the number of symbols the bit pattern can represent?
    Answer：n位二进制可以表示2^n 种字符
    Ai:
3. How does the bitmap graphic method represent an image as a bit pattern?
    Answer：首先将图片分为数个pixel, 对于每个pixel, 用二进制表示出来
    Ai:
4. What is the advantage of the vector graphic method over the bitmap graphic method? What is the disadvantage?
    Answer：优势为 占用存储小, 且rescaling容易, 劣势为只能表示图形, 无法表示图像
    Ai:
5. What steps are needed to convert audio data to bit patterns?
    Answer： 第一步采样, 第二步量化, 第三步将量化后的结果存储
    Ai:
6. Compare and contrast the representation of positive integers in unsigned, sign-and-magnitude format, and two’s complement format.
    Answer：正整数的unsigned, sign-and-magnitude format, and two’s complement format 完全一致
    Ai:
7. Compare and contrast the representation of negative integers in sign-and-magnitude and two’s complement format.
    Answer：负整数的two’s complement format等于 先对sign-and-magnitude每一位取反,然后加1
    Ai:
8. Compare and contrast the representation of zero in sign-and-magnitude, two’s complement, and Excess formats.
    Answer：sign-and-magnitude中有两个零(符号位为0/1,其他位为0), two’s complement只有一个(全为0), excess formats的零也是全为0
    Ai:
9. Discuss the role of the leftmost bit in sign-and-magnitude, and two’s complement formats.
    Answer：sign-and-magnitude中, leftmost位只表示符号. 在two’s complement formats中, leftmost位即表示符号, 也表示值
    Ai:
10. Answer the following questions about floating-point representations of real numbers:
    Answer：a:统一小数点的位置, 方便计算 b:就是科学计数法中的那个数字部分 c: 第一存储符号,第二根据规定存储指数, 第三存储数字部分
    Ai:

   a. Why is normalization necessary?
   b. What is the mantissa?
   c. After a number is normalized, what kind of information does a computer store in memory?


## Problems

1. How many distinct 5-bit patterns can we have?
    Answer：32种
    Ai:
2. In some countries vehicle license plates have two decimal digits (0 to 9). How many distinct plates can we have? If the digit 0 is not allowed on the license plate, how many distinct plates can we have?
    Answer：100种, 81种
    Ai:
3. Redo Problem2 for a license plate that has two digits followed by three uppercase letters (A to Z).
    Answer：1,423,656种
    Ai:
4. A machine has eight different cycles. How many bits are needed to represent each cycle?
    Answer：2 bits
    Ai:
5. A student’s grade in a course can be A, B, C, D, F, W (withdraw), or I (incomplete). How many bits are needed to represent the grade?
    Answer：2bits
    Ai:
6. A company has decided to assign a unique bit pattern to each employee. If the company has 900 employees, what is the minimum number of bits needed to create this system of representation? How many patterns are unassigned? If the company hires another 300 employees, should it increase the number of bits? Explain your answer.
    Answer：最小10bits,能表示1024种状态, 1024-900=124种多余. 300>124所以需要增加bit number
    Ai:
7. If we use a 4-bit pattern to represent the digits 0 to 9, how many bit patterns are wasted?
    Answer：没有被浪费的bit pattern
    Ai:
8. An audio signal is sampled 8000 times per second. Each sample is represented by 256 different levels. How many bits per second are needed to represent this signal?
    Answer：一个sample需要8 bits来表示, 8000*8=64,000 bits每秒
    Ai:
9. Change the following decimal numbers to 8-bit unsigned integers.
    Answer：a: 0010 0011 b: 0001 0010 0001 c: 0011 0100 d: 0011 0100 0010
    Ai:

   a. 23
   b. 121
   c. 34
   d. 342
10. Change the following decimal numbers to 16-bit unsigned integers.
    Answer：a: 1F, b: 109, c: 29C, d: E2
    Ai:

   a. 41
   b. 411
   c. 1234
   d. 342
11. Change the following decimal numbers to 8-bit two’s complement integers.
    Answer： a: 1111 0011, b: 8位无法表示-145, 最大-128, c: 0011 1000, d: 最大只能表示127
    Ai:

   a. −12
   b. −145
   c. 56
   d. 142
12. Change the following decimal numbers to 16-bit two’s complement integers.
    Answer：a: 0000 0000 0110 0110, b: 1111 1111 0100 1101, c: 0000 0010 0001 0110, d: 1111 0010 0110 1000
    Ai:

   a. 102
   b. −179
   c. 534
   d. 62,056
13. Change the following 8-bit unsigned numbers to decimal.
    Answer：a: 107, b: 148, c: 6, d: 80
    Ai:

   a. 01101011
   b. 10010100
   c. 00000110
   d. 01010000
14. Change the following 8-bit two’s complement numbers to decimal.
    Answer：a: 119, b: -4, c: 116, d: -50
    Ai:

   a. 01110111
   b. 11111100
   c. 01110100
   d. 11001110
15. The following are two’s complement binary numbers. Show how to change the sign of the number.
    Answer：a: 1000 1001, b: 0000 0100, c: 1000 1001, d: 0011 0010
    Ai:

   a. 01110111
   b. 11111100
   c. 01110111
   d. 11001110
16. If we apply the two’s complement operation to a number twice, we should get the original number. Apply the two’s complement operation to each of the following numbers and see if we can get the original number.
    Answer：yes we can
    Ai:
    
   a. 01110111
   b. 11111100
   c. 01110100
   d. 11001110
17. Normalize the following binary floating-point numbers. Explicitly show the value of the exponent after normalization.
    Answer：a: 1.10001, b: 2^5 × 1.111111, c: 1.01110011 d: 1.0110100000110011000
    Ai:

   a. 1.10001
   b. 2^3 × 111.1111
   c. 2^-2 × 101.110011
   d. 2^-5 × 101101.00000110011000
18. Convert the following numbers in 32-bit IEEE format.
    Answer：如果是负数, 符号位为1, 正数则为0. 指数部分要增加127(取出数据的时候减回来), 小数部分全部转换为 1开头, 然后 "1."省略
    Ai:

   a. -2^0 × 1.10001
   b. +2^3 × 1.111111
   c. +2^-4 × 1.01110011
   d. -2^-5 × 1.01101000
19. Convert the following numbers in 64-bit IEEE format.
    Answer：如果是负数, 符号位为1, 正数则为0. 指数部分要增加1023(取出数据的时候减回来), 小数部分全部转换为 1开头, 然后 "1."省略
    Ai:

   a. -20 × 1.10001
   b. +23 × 1.111111
   c. +2-4 × 1.01110011
   d. -2-5 × 1.01101000
20. Convert the following numbers in 32-bit IEEE format.
    Answer：
    Ai:

   a. 7.1875
   b. −12.640625
   c. 11.40625
   d. −0.375
21. The following are sign-and-magnitude binary numbers in a 8-bit allocation. Convert them to decimal.
    Answer：a: 119, b: -124, c: 116, d: -78
    Ai:

   a. 01110111
   b. 11111100
   c. 01110100
   d. 11001110
22. Convert the following decimal integers to sign-and-magnitude with 8-bit allocation.
    Answer：0011 0101, 1110 1011, 1000 0101, 最大127表示不了154
    Ai:

   a. 53
   b. −107
   c. −5
   d. 154
23. One method of representing signed numbers in a computer is one’s complement representation. In this representation, to represent a positive number, we store the binary number. To represent a negative number, we apply the one’s complement operation on the number. Store the following decimal integers to one’s complement with 8-bit allocation.
    Answer：0011 0101, 1001 0100, 1111 1010, 表示不了
    Ai:

   a. 53
   b. −107
   c. −5
   d. 154
24. The following are one’s complement binary numbers in a 8-bit allocation. Convert them to decimal.
    Answer：119, -3, 116, -49
    Ai:

   a. 01110111
   b. 11111100
   c. 01110100
   d. 11001110
25. If we apply the one’s complement operation to a number twice, we should get the original number. Apply the one’s complement operation twice to each of the following numbers and see if you can get the original number.
    Answer：yes i can
    Ai:

   a. 01110111
   b. 11111100
   c. 01110100
   d. 11001110
26. An alternative method to find the two’s complement of a number is to first take the one’s complement of the number and then add 1 to the result. (Adding binary integers is explained in Chapter 4). Try both methods using the following numbers. Compare and contrast the results.
    Answer：01110111, 10000100, 0111 0100, 0011 0010
    Ai:

   a. 01110111
   b. 11111100
   c. 01110100
   d. 11001110
27. The equivalent of one’s complement in the binary system is nine’s complement in the decimal system (1 = 2 – 1 and 9 = 10 – 1). With n-digit allocation, we can represent nine’s complement numbers in the range of: – [(10n/2) – 1] to + [(10n/2 – 1)]. The nine’s complement of a number with n digit allocation is obtained as follows. If the number is positive, the nine’s complement of the number is itself. If the number is negative, we subtract each digit from 9. Answer the following questions for three-digit allocation:
    Answer：a: 范围是– [(10n/2) – 1] to + [(10n/2 – 1)], b: 当最左侧位 是小于等于4时, 为正数, 大于等于5时, 为负数.  c: 有两个zero. d:正零为所有位都为0, 负零是所有位都是9.
    Ai:

   a. What is the range of the numbers we can represent using nine’s complement?
   b. In this system, how can we determine the sign of a number?
   c. Do we have two zeros in this system?
   d. If the answer to c. is yes, what is the representation for +0 and -0?
28. Assuming three-digit allocation, find the nine’s complement of the following decimal numbers.
    Answer：234, 3位有符号nine’s complement最大表示499, 874, 888
    Ai:

   a. +234
   b. +560
   c. -125
   d. -111
29. The equivalent of two’s complement in the binary system is ten’s complement in the decimal system (in the binary system, 2 is the base, in the decimal system, 10 is the base). Using n-digit allocation, we can represent numbers in the range of: – (10n/2) to + (10n/2 – 1) in ten’s complement format. The ten’s complement of a number with n-digit allocation is obtained by first finding the nine’s complement of the number and then adding 1 to the result. Answer the following questions for three-digit allocation.
    Answer：a: 范围是 – (10n/2)  to + (10n/2 – 1), b: 当最左侧位 是小于等于4时, 为正数, 大于等于5时, 为负数. c: 只有一个zero. 
    Ai:

   a. What is the range of the numbers we can represent using ten’s complement?
   b. In this system, how can we determine the sign of a number?
   c. Do we have two zeros in this system?
   d. If the answer to c. is yes, what is the representation for +0 and −0?
30. Assuming three-digit allocation, find the ten’s complement of the following decimal numbers.
    Answer：234, 560, 875, 889
    Ai:

   a. +234
   b. +560
   c. -125
   d. -111
31. The equivalent of one’s complement in the binary system is fifteen’s complement in the hexadecimal system (1 = 2 - 1 and 15 = 16 - 1).
    Answer：a: 范围是– [(16n/2) – 1] to + [(16n/2 – 1)]. b: 符号位小于等于7则是正数,符号位大于等于8是负数.正数的complement是本身, 负数的complement是用F 减去正数的每一位. c: 有两个zero. d: 同样道理, 全是零和全是F
    Ai:

   a. What range of numbers can we represent with three-digit allocation in fifteen’s complement?
   b. Explain how the fifteen’s complement of a number is obtained in the hexadecimal system.
   c. Do we have two zeros in this system?
   d. If the answer to c. is yes, what is the representation for +0 and -0?
32. Assuming three-digit allocation, find the fifteen’s complement of the following hexadecimal numbers.
    Answer：B14, FE1, E4, E1D
    Ai:

   a. +B14
   b. +FE1
   c. -1A
   d. -1E2
33. The equivalent of two’s complement in the binary system is sixteen’s complement in the hexadecimal system.
    Answer：
    Ai:
    
   a. What range of numbers can we represent with three-digit allocation in sixteen’s complement?
   b. Explain how a sixteen’s complement of a number is obtained in the hexadecimal system.
   c. Do we have two zeros in this system?
   d. If the answer to c. is yes, what is the representation for +0 and −0?
34. Assuming three-digit allocation, find the sixteen’s complement of the following hexadecimal numbers.
    Answer：
    Ai:

   a. +B14
   b. +FE1
   c. −1A
   d. −1E2