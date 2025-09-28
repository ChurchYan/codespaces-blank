#include <stdio.h>
typedef struct node* link;
struct node { int item; link next; };

int main()
{
    int i, N = 10, M;
    link t = malloc(sizeof  *t), x = t;
    t->item = 1; t->next = t;
    for (i = 2; i <= N; i++){
      x = (x->next = malloc(sizeof  *x));
      x->item = i;
      x->next = t;
    }
    x = t;
    x = t;
    i = 0;
    do {
      i++;
      x = x->next;
    } while (x != t);
    printf("Total %d pointer\n", i);
    
    // int g;
    // printf("Please input the number of pointer, i will show you address:\n");
    // scanf("%d", &g);
    printf("%p", &t);
    
    
    return 0;
}