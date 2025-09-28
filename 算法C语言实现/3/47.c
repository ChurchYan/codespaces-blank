#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct node* link;
struct node { link prev; int item; link next; };

link initdoublewithoutdumb(int len){
    srand(time(NULL));
    link t = malloc(sizeof *t), x = t;
    t->prev = NULL;
    t->item = rand()%15+1;
    t->next = NULL;
    for (int i = 1; i < len; i++)
    {
        x->next = malloc(sizeof *x);
        x->next->prev = x;
        x = x->next;
        x->item = rand()%15+1;
        x->next = NULL;
    }
    return t;
}


void printNodes(link x){
    int len = 1;
    for (; x != NULL; x = x->next)
    {
        printf("linked number %d's value is %d\n", len, x->item);
        len++;
    }
    return;   
}

void freeNodes(link *t){
    link next;
    while (*t != NULL)
    {
        next = (*t)->next;
        free(*t);
        *t = next;
    }
    
    return;
}


int main(void){
    
    int len = 5;
    
    link head = initdoublewithoutdumb(len);
    printNodes(head);


    printf("\n");
    freeNodes(&head);
    // printNodes(head);

    // 验证head是否为NULL
    if (head == NULL) {
        printf("Memory successfully freed, head is now NULL\n");
    }
    
    // 不要再调用printNodes(head)，因为head已经是NULL了

    return 0;
    
}
