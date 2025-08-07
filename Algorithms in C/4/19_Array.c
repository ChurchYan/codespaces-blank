#include <stdlib.h>
#include <stdio.h>
typedef char Item;

static Item *s;
static int N;

void STACKinit(int maxN){
    s = malloc(maxN * sizeof(Item));
    N = 0;
}
int STACKcount(){
    return (N > 0) ? N - 1 : 0;
}
void STACKpush(Item item){
    s[N++] = item;
}
Item STACKpop(){
    return s[--N];
}


int main(){

    return 0;
}