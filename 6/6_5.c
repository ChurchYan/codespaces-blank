#include <stdio.h>

int main() {
    
    char s;
    int numRows;
    printf("Please input a uppercase letter:\n");
    scanf("%c", &s);
    if(s-'A' == 0){
        numRows = 1;
    } else if(s-'A' < 0){
        return 0;
    } else if (s-'A' > 0){
        numRows = s-'A'+1;
    }
    
    int width = 2 * numRows - 1;
    for (int i = 0; i < numRows; i++) {
        // 输出行首空格
        for (int k = 0; k < numRows - i - 1; k++) {
            putchar(' ');
        }

        // 输出左半部分字母
        for (int j = 0; j < i; j++) {
            putchar('A' + j);
        }

        // 输出中间字母
        putchar('A' + i);

        // 输出右半部分字母
        for (int j = i - 1; j >= 0; j--) {
            putchar('A' + j);
        }

        putchar('\n');
    }
    return 0;
}