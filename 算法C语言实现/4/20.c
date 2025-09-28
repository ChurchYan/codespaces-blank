#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
typedef char Item;

static Item *s;
static int N;
static int maxN;

void STACKinit(int m){
    s = malloc(m * sizeof(Item));
    N = 0;
    maxN = m;
}
int STACKempty(){
    return N == 0;
}
void STACKpush(Item item){
    if (N < maxN) {
        s[N++] = item;
    } else {
        STACKerror();
    }
}
Item STACKpop(){
    if (N = 0)
    {
        STACKerror();
    } else {
        return s[--N];
    }
    
}

void STACKerror(){
    printf("Stack overflow!\n");
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