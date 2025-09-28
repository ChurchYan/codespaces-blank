#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

typedef struct node* link;
struct node { int item; link next; };

// 值传递：只传递指针的副本
void changeHead_byValue(link head) {
    printf("函数内 head 地址: %p\n", (void*)&head);
    printf("函数内 head 指向: %p\n", (void*)head);
    
    head = head->next; // 只改变了局部变量 head 的副本
    
    printf("修改后 head 指向: %p\n", (void*)head);
    // 这里修改的只是局部变量，不影响 main 中的 a
}

// 指针传递：传递指针的地址
void changeHead_byPointer(link *head) {
    printf("函数内 head 参数地址: %p\n", (void*)head);
    printf("函数内 *head 指向: %p\n", (void*)*head);
    
    *head = (*head)->next; // 通过解引用修改原始指针
    
    printf("修改后 *head 指向: %p\n", (void*)*head);
    // 这里修改的是 main 中 a 的值
}

int main() {
    // 设置控制台代码页为936 (简体中文GBK)
    system("chcp 936 > nul");
    
    // 创建链表: a -> b -> NULL
    link a = malloc(sizeof(struct node));
    link b = malloc(sizeof(struct node));
    a->item = 1; a->next = b;
    b->item = 2; b->next = NULL;
    
    printf("=== 地址分析 ===\n");
    printf("main 中 a 的地址: %p\n", (void*)&a);
    printf("main 中 a 指向: %p (节点1)\n", (void*)a);
    printf("main 中 b 指向: %p (节点2)\n", (void*)b);
    
    printf("\n=== 值传递测试 ===\n");
    printf("调用前 a->item: %d\n", a->item);
    changeHead_byValue(a);
    printf("调用后 a->item: %d (未改变)\n", a->item);
    printf("调用后 a 仍指向: %p\n", (void*)a);
    
    printf("\n=== 指针传递测试 ===\n");
    printf("调用前 a->item: %d\n", a->item);
    changeHead_byPointer(&a);
    printf("调用后 a->item: %d (已改变)\n", a->item);
    printf("调用后 a 现在指向: %p\n", (void*)a);
    
    return 0;
}