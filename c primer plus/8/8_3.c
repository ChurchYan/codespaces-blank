#include <stdio.h>

int main(void){
    int lower = 0;
    int upper = 0;
    char ch;
    while ((ch=getchar())!=EOF){
        if (ch >= 'A' && ch <='Z')
        {
            upper++;
        } else if (ch >= 'a' && ch <= 'z') {
            lower++;
        }
    }

    printf("Therer are %d uppercase , and %d lower case in this sentence\n", upper, lower);

    return 0;
}