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

// <---------- Solution with claude sonnet 4 ---------->
link copyList(link head) {
    if (head == NULL) return NULL;
    
    link newHead = malloc(sizeof *newHead);
    newHead->item = head->item;
    newHead->next = NULL;
    
    link current = newHead;
    link original = head->next;
    
    while (original != NULL) {
        current->next = malloc(sizeof *current->next);
        current = current->next;
        current->item = original->item;
        current->next = NULL;
        original = original->next;
    }
    
    return newHead;
}

int main(void){
    
    int len = 5;
    
    //头节点分为哑元节点和无哑元节点
    //链表最后一个节点next指向NULL, 即为空节点
    
    link head = initwithoutdumb(len);
    printNodes(head);
    printf("Address is %p", &head);

    printf("\n");

    // <-------- My Solution ---------->
    // link t = malloc(sizeof *t), y=t, x= head->next;
    // t->item = head->item;
    // t->next = head->next;
    // do
    // {
    //     y = (y->next = malloc(sizeof *y));
    //     y->item = x->item;
    //     y->next = NULL;
    //     x = x->next;
    // } while (x->next != NULL);
    // y = (y->next = malloc(sizeof *y));
    // y->item = x->item;
    // y->next = NULL;
    printf("\n");
    link t = copyList(head);
    printNodes(t);
    printf("Address is %p", &t);


    return 0;
    
}
