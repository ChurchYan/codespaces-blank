#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n') {
            continue; // Ignore Enter key
        }
        if (ispunct(ch))
        {
            /* code */
            printf("This is a punctuation\n");
        } else {
            printf ("This isn't a punctuation\n");
        }
        
    }

    return 0;
    
}