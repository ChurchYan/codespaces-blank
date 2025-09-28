#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

typedef struct node* link;
struct node { int item; link next; };

// ֵ���ݣ�ֻ����ָ��ĸ���
void changeHead_byValue(link head) {
    printf("������ head ��ַ: %p\n", (void*)&head);
    printf("������ head ָ��: %p\n", (void*)head);
    
    head = head->next; // ֻ�ı��˾ֲ����� head �ĸ���
    
    printf("�޸ĺ� head ָ��: %p\n", (void*)head);
    // �����޸ĵ�ֻ�Ǿֲ���������Ӱ�� main �е� a
}

// ָ�봫�ݣ�����ָ��ĵ�ַ
void changeHead_byPointer(link *head) {
    printf("������ head ������ַ: %p\n", (void*)head);
    printf("������ *head ָ��: %p\n", (void*)*head);
    
    *head = (*head)->next; // ͨ���������޸�ԭʼָ��
    
    printf("�޸ĺ� *head ָ��: %p\n", (void*)*head);
    // �����޸ĵ��� main �� a ��ֵ
}

int main() {
    // ���ÿ���̨����ҳΪ936 (��������GBK)
    system("chcp 936 > nul");
    
    // ��������: a -> b -> NULL
    link a = malloc(sizeof(struct node));
    link b = malloc(sizeof(struct node));
    a->item = 1; a->next = b;
    b->item = 2; b->next = NULL;
    
    printf("=== ��ַ���� ===\n");
    printf("main �� a �ĵ�ַ: %p\n", (void*)&a);
    printf("main �� a ָ��: %p (�ڵ�1)\n", (void*)a);
    printf("main �� b ָ��: %p (�ڵ�2)\n", (void*)b);
    
    printf("\n=== ֵ���ݲ��� ===\n");
    printf("����ǰ a->item: %d\n", a->item);
    changeHead_byValue(a);
    printf("���ú� a->item: %d (δ�ı�)\n", a->item);
    printf("���ú� a ��ָ��: %p\n", (void*)a);
    
    printf("\n=== ָ�봫�ݲ��� ===\n");
    printf("����ǰ a->item: %d\n", a->item);
    changeHead_byPointer(&a);
    printf("���ú� a->item: %d (�Ѹı�)\n", a->item);
    printf("���ú� a ����ָ��: %p\n", (void*)a);
    
    return 0;
}