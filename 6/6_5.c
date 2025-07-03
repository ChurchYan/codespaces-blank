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