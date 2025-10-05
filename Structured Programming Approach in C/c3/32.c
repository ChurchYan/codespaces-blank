// 32. Write a statement to print the following line. Assume the total value is contained in a variable named cost.
// The sales total is: $172.53

#include <stdio.h>

int main(void){
    float cost = 172.53;

    printf("The sales total is: $%f", cost);

    return 0;
}

/* 批改与建议：
 *
 * 题目要求：输出：The sales total is: $172.53，假设总价存于变量 cost
 *
 * 你的实现和评语：
 * - 你使用了变量声明： float cost = 172.53; —— 这是可以接受的，
 *   但常规上金额使用 double 更精确，建议使用 double cost = 172.53;
 * - printf 格式字符串使用了 %f：printf("The sales total is: $%f", cost);
 *   这会打印默认的六位小数，例如：The sales total is: $172.530000。
 *   题目例子显示两位小数（$172.53），所以应使用格式指定符限制小数位数。
 *   建议改为： printf("The sales total is: $%.2f\n", cost);
 * - 另外，结尾加一换行符会让输出更整洁。
 *
 * 完整推荐代码示例：
 *   double cost = 172.53;
 *   printf("The sales total is: $%.2f\n", cost);
 *
 * 评分（满分 1 分）：
 * - 功能（能打印金额，但格式小数位不符合示例）：0.8/1
 *
 * 小结：功能上可以运行，但请使用合适的类型和格式说明符以匹配题目要求的显示格式。
 */