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

link findMax(link x){
    int max = x->item;
    link max_addr = x;
    for (; x->next != NULL; x = x->next)
    {
        if (x->next->item > max){
            max = x->next->item;
            max_addr = x->next;
        }
    }
    return max_addr; 
}

void movelinktolast(link *head, link p){
    if (*head == NULL || p == NULL || p->next == NULL)
    {
        return;
    }
    if (*head == p)
    {
        *head = p->next;
    }else{
        link prev = *head;
        while (prev->next && prev->next!=p)
        {
            prev = prev->next;
        }
        if (prev->next == NULL)
        {
            return;
        }
        prev->next = p->next;
    }

    link tail = *head;
    while (tail->next!=NULL)
    {
        tail = tail->next;
    }
    tail->next = p;
    p->next = NULL;

    return;
    
}

int main(void){
    
    int len = 5;
    
    //头节点分为哑元节点和无哑元节点
    //链表最后一个节点next指向NULL, 即为空节点
    
    link head = initwithoutdumb(len);
    printNodes(head);

    printf("\n");

    link max = findMax(head);
    movelinktolast(&head, max);
    printNodes(head);

    return 0;
    
}
