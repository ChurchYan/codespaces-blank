// 33. Write a program that uses four print statements to print the pattern of asterisks shown below.
// ```
// ******
// *****
// ****
// ***
// ```

#include <stdio.h>

int main(void){
    printf("******\n");
    printf("*****\n");
    printf("****\n");
    printf("***\n");

    return 0;
}

/* 批改与建议：
 *
 * 题目要求：使用四个 printf 语句输出如下图案：
 * ******
 * *****
 * ****
 * ***
 *
 * 你的实现：
 * - 你使用了四个 printf，每行分别打印相应数量的星号并以换行结束，完全符合题目要求。
 * - 代码简洁可读，没有多余内容。
 *
 * 小建议：
 * - 如果想练习循环，可以用一个外层循环和一个内层循环生成行，这样更具可扩展性。例如打印更多行或不同模式时会更方便。
 *
 * 评分：满分 1/1（正确且风格良好）
 */