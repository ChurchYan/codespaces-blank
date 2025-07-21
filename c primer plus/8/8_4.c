#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int c_num = -1;
    int c_length = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            continue;
        }
        
        if (ch == ' ' || ispunct(ch))
        {
            c_num++;
        } else if (ch >= 'A' && ch <= 'z')
        {
            /* code */
            c_length++;
        }
        
    }


    printf ("Your input is total %d words and total charater is %d,  average is %.2f charater\n", c_num,c_length, 1.0 * c_length/c_num);
    return 0;
    
}