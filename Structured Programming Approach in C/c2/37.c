// 37. Write a program that prompts the user to enter a quantity and a cost. 
// The values are to be read into an integer named quantity and a float named unitPrice. 
// Define the variables and use only one statement to read the values. 
// After reading the values, skip one line and print each value, 
// with an appropriate name, on a separate line.

#include <stdio.h>

int main(void){

    int quantity;
    float cost;

    scanf(" %d %f", &quantity, &cost);
    printf("\n");
    printf("Quantity is : %d\n", quantity);
    printf("Cost is : %f", cost);

    return 0;

}

/*
批改意见：
1. 功能正确：程序按题目要求读取一个整数（quantity）和一个浮点数（unitPrice），并在读取后空一行，再分别输出每个变量及其名称，基本功能实现正确。

2. 变量命名与题意：
    - 题目要求将第二个变量命名为 unitPrice，你在代码中使用了名称 `cost`，含义相近且可读，但严格按题目要求应使用 `unitPrice`。这通常不影响程序功能，但在作业提交时最好保持与题目一致。

3. scanf_s 使用：
    - 你使用了 `scanf_s(" %d %f", &quantity, &cost);`。在 Microsoft 的安全扩展中，`scanf_s` 对某些类型（如字符串）需要额外的长度参数，但对 `int` 和 `float` 通常与 `scanf` 类似可用。不过，为了可移植性和教材一致性，建议使用标准 `scanf("%d %f", &quantity, &unitPrice);`。

4. 格式化输出：
    - 你用 `printf("Cost is : %f", cost);` 输出浮点数，建议限制小数位以提高可读性，例如 `%.2f`，根据题目需求选择合适的精度。

5. 小建议：
    - 可在提示用户输入时加上提示信息，例如 `printf("Enter quantity and unit price: ");`，提高交互体验。
    - 初始化变量时直接声明并赋值（如有默认值或测试）可以使代码更紧凑。

6. 评分（按常见作业标准）：
    - 编译与运行：5/5
    - 正确性：4.5/5（变量命名与题目略有出入）
    - 风格与可移植性：4.5/5（建议使用标准 scanf 和更好的 printf 精度说明）

总体评语：程序能完成题目要求，结构清晰。按题目严格要求建议把 `cost` 改为 `unitPrice`，并考虑使用 `scanf` 与格式化浮点输出以提升可读性和可移植性。
*/