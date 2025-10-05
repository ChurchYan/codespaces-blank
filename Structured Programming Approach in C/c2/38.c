// 38. Write a program that prompts the user to enter an integer and then prints the integer first as a character, then as a decimal, and finally as a float. Use separate print statements. A sample run is shown below.
// ```
// The number as a character: K
// The number as a decimal: 75
// The number as a float: 0.000000
// ```

#include <stdio.h>

int main(void){

    int i;
    printf("Please enter an Integer:\n");
    scanf_s(" %d", &i);

    printf("The number as a charater: %c\n", i);
    printf("The number as a decimal: %d\n", i);
    printf("The number as a float: %f\n", i);

    return 0;
}

/*
批改意见：
1. 功能与输出：程序能提示用户输入整数，并分别以字符、十进制整数和浮点数格式输出。注意示例中字符 'K' 对应的整数 75，你的实现会在输入 75 时正确显示字符和整数，但使用 %f 打印 int 会产生未定义或非预期的结果（通常会显示 0.000000 或其他值），因为 %f 期待的是 double 类型。

2. 小错误修正建议：
    - printf 的第一行拼写有小错误："The number as a charater" → "The number as a character"，建议修正拼写。
    - scanf_s 的使用：你使用了 `scanf_s(" %d", &i);`。对于 int 类型这通常可行；不过为了可移植性，建议使用标准 `scanf("%d", &i);`，或者在 MSVC 平台使用 `scanf_s` 时遵循其要求。

3. 类型匹配建议：
    - 要正确按浮点格式打印，应该将整数转换为 double，例如：
         printf("The number as a float: %f\n", (double)i);
      这会显示该整数对应的浮点值（例如 75 → 75.000000）。

4. 风格建议：
    - 在提示用户输入时可以提供更明确的说明，例如 `printf("Please enter an integer (e.g. 75): ");`。
    - 考虑在字符输出前判断 i 是否在可打印字符范围（例如 0 到 127 或更严格的可打印字符区间），以避免打印非可见字符。

5. 评分（按常见作业标准）：
    - 编译与运行：5/5
    - 正确性（理解类型与格式匹配）：4.5/5（应强调将 int 转为 double 以用 %f 打印）
    - 风格与可移植性：4.5/5

总体评语：思路正确，能展示类型和格式化输出之间的差异。请修正拼写、注意 printf 格式与实参类型的一致性，并考虑加入类型检查或转换以增强健壮性。
*/