// 34. Write a program that uses four print statements to print the pattern of asterisks shown below.
// ```
// *
// **
// ***
// ****
// ```

#include <stdio.h>

int main(void){
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");

    return 0;
}

/* 批改与建议：
 *
 * 题目要求：使用四个 printf 语句打印如下星号图案：
 * *
 * **
 * ***
 * ****
 *
 * 你的实现：
 * - 使用了四个 printf，每行打印对应数量的星号并以换行结束，完全符合要求。
 * - 代码简洁且可读。
 *
 * 小建议：
 * - 可以尝试用循环（嵌套循环或单个循环配合字符串）来练习更通用的打印方法，
 *   这样更容易扩展到更多行或不同的模式。
 *
 * 评分：1/1（正确）
 */
