// 35. Write a program that uses defined constants for the vowels in the alphabet 
// and memory constants for the even decimal digits (0, 2, 4, 6, 8). 
// It then prints the following three lines using 
// literal constants for the odd digits.
// ```
// a e i o u
// 0 2 4 6 8
// 1 3 5 7 9
// ```

#include <stdio.h>
#define VOWEL_A 'a'
#define VOWEL_E 'e'
#define VOWEL_I 'i'
#define VOWEL_O 'o'
#define VOWEL_U 'u'

int main(void){
    const int zero = 0;
    const int two = 2;
    const int four = 4;
    const int six = 6;
    const int eight = 8;

    printf("%c %c %c %c %c\n", VOWEL_A, VOWEL_E, VOWEL_I, VOWEL_O, VOWEL_U);
    printf("%d %d %d %d %d\n", zero, two, four, six, eight);
    printf("%d %d %d %d %d\n", 1, 3, 5, 7, 9);

    return 0;
}

/*
批改意见：
1. 功能正确：程序按照题目要求使用宏定义元音字母、使用 const 变量表示偶数十进制数字，并输出三行：元音、偶数（用变量）和奇数（用字面常量）。运行结果将会是：
    a e i o u
    0 2 4 6 8
    1 3 5 7 9

2. 风格建议：
    - 你使用了单个字符的宏（如 VOWEL_A）分别定义五个元音，完全可行。也可以考虑用字符串宏（例如 #define VOWELS "a e i o u"）来简化打印，但当前实现更清晰地展示了宏和 printf 的结合。
    - 对于偶数的常量，你用了多个 const int 变量，这与题意中的“memory constants”相匹配。也可以使用一个数组 const int evens[] = {0,2,4,6,8} 来让代码更紧凑，尤其是在需要循环打印时更方便。

3. 小改进（非必须）：
    - 在 printf 中，如果改用字符串常量或数组配合循环，可以减少重复的格式占位符，示例：
         const int evens[] = {0,2,4,6,8};
         for (int i=0;i<5;i++) printf(i?" %d":"%d", evens[i]);
    - 可以在文件顶部添加题目注释（你已加），以及保持换行和缩进一致性（当前已很好）。

4. 评分（按常见作业标准）：
    - 编译与运行：5/5
    - 正确性：5/5
    - 风格与可读性：4.5/5

总体评语：实现清晰、正确，结构良好。可以尝试用字符串宏或数组作为练习，让代码更具可扩展性。
*/