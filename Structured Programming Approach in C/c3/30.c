// 30. Code the variable declarations for each of the following:
// a. a character variable named option
// b. an integer variable, sum, initialized to 0
// c. a floating-point variable, product, initialized to 1

#include <stdio.h>

int main(void){
    char option;
    int sum = 0;
    float product = 1.0;

    return 0;
}

/*
批改：
- 功能：按照题目要求声明了变量，分别为：
    a. char option;
    b. int sum = 0;
    c. float product = 1.0;
- 正确性：正确。变量名符合题意，sum 和 product 已初始化，product 使用 1.0（可加 f 明确为 float，但非必需）。
- 风格建议：
    - 如果变量未使用，编译器可能给出未使用的警告；建议后续练习中对变量进行使用或加注释说明用途。
    - 对浮点字面量可以写作 1.0f 来明确类型：float product = 1.0f;
    - 为 main 添加简单注释或输出有助于可读性和调试。
- 总评：答题完全正确，给分：100/100。
*/