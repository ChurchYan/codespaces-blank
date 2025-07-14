#include <stdio.h>

void chline(char, int, int);

int main(void){
    char ch;
    int x, y;
    printf("Please input your charater:\n");
    scanf("%c", &ch);
    printf("Please input how many lines and how many rows:\n");
    scanf("%d %d", &x, &y);

    chline(ch, x, y);

    return 0;
}

void chline(char ch, int x, int y){
    do
    {
        for (int line = 0; line < x; line++)
        {
            putchar(ch);
        }
        putchar('\n');
        y--;
    } while (y>0);
    
    return;
}