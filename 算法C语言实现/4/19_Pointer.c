#include <stdlib.h>
#include <stdio.h>
typedef char Item;

typedef struct STACKnode* link;
struct STACKnode { Item item; link next };
static link head;

link NEW(Item item, link next){
    link x = malloc(sizeof *x);
    x->item = item;
    x->next = next;
    return x;
}
void STACKinit(int maxN){
    head = NULL;
}

int STACKcount(){
    if (head == NULL)
    {
        return 0;
    }
    int count = 0;
    while (head != NULL)
    {
        count ++;
        head = head->next;
    }
    return count;   
}

void STACKpush(Item item){
    head = NEW(item, head);
}

Item STACKpop(){
    Item item = head->item;
    link t = head->next;
    free(head);
    head = t;
    return item;
}



int main(){

    return 0;
}