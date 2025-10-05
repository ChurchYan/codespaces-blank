// 31. Code the variable declarations for each of the following:
// a. a short integer variable named code
// b. a constant named salesTax initialized to 0.0825
// c. a floating-point named sum of size double initialized to 0

#include <stdio.h>

int main(void){
    short int code;
    const double salesTax = 0.0825f;
    float sum_of_size_double = 0;

    return 0;
}

/* 批改与建议：
 *
 * 题目要求：
 * a) a short integer variable named code
 * b) a constant named salesTax initialized to 0.0825
 * c) a floating-point named sum of size double initialized to 0
 *
 * 你的实现和评语：
 * - a) short int code;  —— 正确，类型和名字都符合要求。
 * - b) const double salesTax = 0.0825f;
 *     问题：你把字面量写成了带 'f' 的单精度浮点常量（float 后缀），
 *     但变量被声明为 double。虽然编译器会把 float 提升为 double，
 *     最好把字面量写为 0.0825（不带 f）以明确是 double，或者把类型改为 float。
 *     建议改为： const double salesTax = 0.0825;
 * - c) float sum_of_size_double = 0;
 *     问题：题目要求是“名为 sum 的 double 型浮点数并初始化为 0”。
 *     你使用了 float（精度不同）且命名不符合要求。建议改为：
 *     double sum = 0;
 *
 * 其他建议：
 * - 你包含了 <stdio.h> 但在当前程序中没有使用它，这不是错误，
 *   只是可以在不需要时去掉以保持整洁。
 *
 * 总结评分（满分 3 分）：
 * - a) 正确：1/1
 * - b) 类型/字面量不一致：0.5/1
 * - c) 名称与类型不符合：0.5/1
 * 最终得分：2/3
 *
 * 改正后完整声明示例：
 *   short int code;
 *   const double salesTax = 0.0825;
 *   double sum = 0;
 */