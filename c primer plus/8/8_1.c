#include <stdio.h>

int main(void) {
    int counter = 0;
    char ch;
    while (1) {
        ch = getchar();
        if ( ch == EOF) {
            break;
        }
        counter++;
    }
    printf("Your total input is %d", counter);
    return 0;
}