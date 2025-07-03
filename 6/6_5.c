#include <stdio.h>
int main()
{
    char s = 'A';
    int width = 24;
    for (int i = 1; i < 10; i++)
    {
        printf("%*s", (width - (i - 1) * 2) / 2, "");

        int j = 0;

        for (j; j < i - 1; j++)
        {
            printf("%c", s + j);
        }
        printf("%c", s + i - 1);

        for (j; j > 0; j--)
        {
            printf("%c", s + j - 1);
        }

        printf("%*s", (width - (i - 1) * 2) / 2, "");
        printf("\n");
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     char s = 'A';
//     int numRows = 9;  // 控制行数
//     int width = 2 * numRows - 1;

//     for (int i = 0; i < numRows; i++) {
//         // 输出行首空格
//         for (int k = 0; k < numRows - i - 1; k++) {
//             putchar(' ');
//         }

//         // 输出左半部分字母
//         for (int j = 0; j < i; j++) {
//             putchar(s + j);
//         }

//         // 输出中间字母
//         putchar(s + i);

//         // 输出右半部分字母
//         for (int j = i - 1; j >= 0; j--) {
//             putchar(s + j);
//         }

//         putchar('\n');
//     }
//     return 0;
// }