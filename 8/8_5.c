#include <stdio.h>
int main(void)
{
    
    int lower = 1;
    int larger = 100;
    int guess;
    char ch;
    

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    
    while (1){
        guess = (lower + larger)/2;
        printf("Uh...is your number %d?\n", guess);
        ch = getchar();
        while (getchar() != '\n')
        {
            /* code */
        }
        
        if (ch == 'y')
        {
            break;
        } else if (ch == 'n')
        {
            
            printf("Is it larger or smaller? (l/s)\n");
            ch = getchar();
            if (ch == 'l'){
                larger = guess -1;
            } else if (ch == 's'){
                lower = guess + 1;
            }
            while (getchar() != '\n')
            {
                /* code */
            } 
        }
        
        
    }  
    printf("I knew I could do it!\n");

    return 0;
}