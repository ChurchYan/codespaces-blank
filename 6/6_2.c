#include <stdio.h>

int main(void){
    for (int i = 1; i < 6; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}