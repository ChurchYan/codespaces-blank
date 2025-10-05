// 41. Write a program that prompts the user to enter three numbers and 
// then prints them vertically (each on one line), 
// first forward and then reversed (the last one first), as shown in the following design.

// Please enter three numbers: 15 35 72 Your numbers forward:
// 15
// 35
// 72
// Your numbers reversed:
// 72
// 35
// 15

#include <stdio.h>

int main(void){
    int a, b , c;
    printf("Please enter three number: \n");
    scanf_s(" %d %d %d", &a, &b, &c);
    printf("\n");
    printf("Your Numbers forward:\n %d\n %d\n %d\n", a, b, c);
    printf("Your Numbers reversed:\n %d\n %d\n %d\n", c, b, a);

    return 0;
}

/*
批改意见：
1. 功能正确：程序能按题目要求提示输入三个数字，并分别以正序与反序垂直打印，输出格式满足题目示例。

2. 文字与格式建议：
    - 提示信息中 `Please enter three number:` 建议改为复数形式 `Please enter three numbers:`。
    - 输出标签 `Your Numbers forward:` 中单词大小写无妨，但与题目示例保持一致（例如 `Your numbers forward:`）会更好。

3. scanf_s 使用与可移植性：
    - 你使用了 `scanf_s(" %d %d %d", &a, &b, &c);`。对于这种简单输入，建议使用标准 `scanf("%d %d %d", &a, &b, &c);`，以提高代码的可移植性（`scanf_s` 是 Microsoft 的安全扩展，在其他编译器上可能不可用或要求不同参数）。

4. 风格小建议：
    - 可以把提示与输入放在同一行以更接近题目示例：
         printf("Please enter three numbers: ");
         scanf("%d %d %d", &a, &b, &c);
    - 在 printf 中，当前格式在输出每行前有一个空格（`\n %d`），如果不希望行首有空格，可以把格式改为 `\n%d`。

5. 评分（按常见作业标准）：
    - 编译与运行：5/5
    - 正确性：5/5
    - 风格与可移植性：4.5/5（建议使用标准输入函数并微调文本）

总体评语：实现清晰、正确，输出与题意一致。按题目严格要求调整提示文字与使用标准库函数会让代码更加规范与可移植。
*/