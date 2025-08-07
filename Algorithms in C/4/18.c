#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
typedef char Item;

static Item *s;
static int N;

void STACKinit(int maxN){
    s = malloc(maxN * sizeof(Item));
    N = 0;
}
int STACKempty(){
    return N == 0;
}
void STACKpush(Item item){
    s[N++] = item;
}
Item STACKpop(){
    return s[--N];
}

void PrintSTACK(){
    for (int i = 0; i < N; i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n");
    
}

void PrintFive(){
    printf("Current s: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", s[i]);
    }

    printf("\n");
    
}

int main(){
    char c;

    STACKinit(10);

    while((c = getchar()) != 'Q'){
        
        if (c == '\n')
        {
            continue;
        } else if (isalpha(c)) {
            STACKpush(c);
        } else if (c == '*'){
            STACKpop();
        } else {
            printf("Wrong Format\n");
            return -1;
        }
        
        PrintSTACK();
        
    }
    PrintFive();

    return 0;
}