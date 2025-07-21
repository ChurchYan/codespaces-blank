#include <stdio.h>

int main(void){
    char s[100];
    float weight;
    int c;
    
    printf("what's your name:\n");
    scanf ("%s", s);
    while ((c = getchar()) != '\n' && c != EOF) {
        putchar(c);
    }
    printf("\n buff already show\n");
    printf("%s, waht's your weight?\n", s);
    scanf("%f", &weight);
    printf("Your weight %f", weight);
}