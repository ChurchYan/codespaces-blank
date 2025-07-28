#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct node* link;
struct node { int item; link next; };

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

link findMin(link x){
    int min = x->item;
    link min_addr = x;
    for (; x->next != NULL; x = x->next)
    {
        if (x->next->item < min){
            min = x->next->item;
            min_addr = x->next;
        }
    }
    // printf("Min = %d\n", min);
    return min_addr; 
}

void movelinktofirst(link *head, link p){
    if (*head == NULL || p == NULL)
    {
        return;
    }
    if (*head == p)
    {
        return;
    }else{
        link prev = *head;
        while (prev->next && prev->next!=p)
        {
            prev = prev->next;
        }
        prev->next = p->next;
    }

    p->next = *head;
    *head = p;

    return;
    
}

int main(void){
    
    int len = 5;
    
    //头节点分为哑元节点和无哑元节点
    //链表最后一个节点next指向NULL, 即为空节点
    
    link head = initwithoutdumb(len);
    printNodes(head);

    printf("\n");

    link min = findMin(head);
    movelinktofirst(&head, min);
    printNodes(head);

    return 0;
    
}
