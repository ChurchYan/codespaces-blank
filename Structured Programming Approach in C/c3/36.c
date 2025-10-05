// 36. Write a program that defines 
// five integer variables and initializes them to 1, 10, 100, 1000, and 10000. 
// It then prints them on a single line separated by space characters using the 
// decimal conversion code (%d), and on the next line with the float conversion code (%f). 
// Note the differences between the results. How do you explain them?

#include <stdio.h>

int main(void){
    int a, b, c, d, e;
    a = 1;
    b = 10;
    c = 100;
    d = 1000;
    e = 10000;

    printf("%d %d %d %d %d\n", a , b , c, d, e);
    printf("%f %f %f %f %f\n", a , b , c, d, e);

    return 0;
    
}

// Output
// 1 10 100 1000 10000
// 0.000000 0.000000 0.000000 0.000000 0.000000
// 原因就是 类型不匹配导致读取变量时发生错误

/*
批改意见：
1. 正确性：程序能够展示类型不匹配带来的差异：用 %d 打印时得到整数的预期输出，而用 %f 打印 int 类型会导致未定义行为或输出为 0（取决于实现和调用约定）。你的示例输出和结论（类型不匹配导致错误）本质上是正确的。

2. 解释补充：
    - 在 C 语言中，printf 的格式说明符必须与对应的实参类型精确匹配。%d 期待一个 int，而 %f 期待一个 double（可变参数会进行默认参数提升，float 会提升为 double）。将 int 传给 %f 会让 printf 按 double 的内存布局去读取参数，从而产生错误结果或不可预测的输出。
    - 正确的比较方法是要么把变量声明为 double 并初始化为对应的数值，再用 %f 打印；要么在打印时显式地将 int 强制转换为 double，例如：printf("%f ", (double)a);

3. 风格建议：
    - 可以把变量初始化时就赋值（int a=1, b=10, ...;）使代码更简洁。
    - 在注释中说明为什么结果会是 0.000000（这是实现细节，可能是因为栈参数读取错位等），并建议读者在不同平台上多验证。

4. 评分（按常见作业标准）：
    - 编译与运行：5/5
    - 正确性（结论）：5/5
    - 解释深度与风格：4.5/5

总体评语：实验设计正确，结论到位。建议补充关于可变参函数参数提升和 printf 读取约定的说明，或演示修正后的正确写法以加深理解。
*/