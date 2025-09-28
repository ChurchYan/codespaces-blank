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
        printf("Max = %d\n", max);
    return max_addr; 
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
    printf("Min = %d\n", min);
    return min_addr; 
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

link switchlink(link first, link second){
    // 只交换两个节点的值，不改变链表结构
    int temp = first->item;
    first->item = second->item;
    second->item = temp;
    
    return NULL;
}


int main(void){
    
    int len = 5;
    
    //头节点分为哑元节点和无哑元节点
    //链表最后一个节点next指向NULL, 即为空节点
    
    link head = initdoublewithoutdumb(len);
    printNodes(head);

    link max = findMax(head);
    link min = findMin(head);

    printf("\n");

    switchlink(max, min);
    printNodes(head);


    return 0;
    
}
