#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct node* link;
struct node { link prev; int item; link next; };

link initwithoutdumb(int len){
    srand(time(NULL));
    link t = malloc(sizeof *t), x = t;
    t->item = rand()%15+1;
    t->next = NULL;
    for (int i = 1; i < len; i++)
    {
        x = (x->next = malloc(sizeof *x));
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

void freeNode(link *head, int N){
    if (*head == NULL)
    {
        return;
    }
    link Node = *head;
    link prev = NULL;
    
    for (int i = 1; i < N && Node != NULL; i++)
    {
        prev = Node;
        Node = Node->next;
    }

    if (Node == NULL)
    {
        return;
    }

    if (prev == NULL)
    {
        *head = Node->next;
    } else {
        prev->next = Node->next;
    }
    free(Node);
    return;
}


int main(void){
    
    int len = 36;
    
    link head = initwithoutdumb(len);
    printNodes(head);


    printf("\n");
    for (int i = (len - len%5); i > 0; i = i - 5)
    {
        freeNode(&head, i);
    }
    
    printNodes(head);


    return 0;
    
}
