/*******************************************************************************
 * ����˼��
 * 
 * �ڵ�ṹ������һ���ṹ�����顣ÿ���ṹ��Ԫ�ش���һ������ڵ㡣
 * ����ṹ����˰�������� data���������⣬����Ҫһ��**"�α�"��cursor��
 * ������ָ�룬����α�洢������һ���ڵ��������е��±�**��
 *
 * �����������������һ�����������������
 *
 * ��������Free List����һ��������δ��ʹ�õ�����Ԫ����ɵ�����
 * ����Ҫ"����"�½ڵ�ʱ���ʹ�������������ͷ��ȡһ����
 * 
 * ��������Data List����һ�������ڱ�ʹ�õ�����Ԫ����ɵ�����
 * ���ڴ洢ʵ�����ݡ�
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// ���������������������ڴ�صĴ�С
#define MAX_SIZE 10

// ���徲̬����Ľڵ�ṹ
typedef struct {
    int data;     // ������
    int cursor;   // �α�(cursor)������ģ��ָ�룬�����һ���ڵ�������±�
} Node;

// ���徲̬�������ͣ�����������һ���ṹ������
typedef Node StaticLinkedList[MAX_SIZE];

// ��������
void InitList(StaticLinkedList space);
int Malloc_SLL(StaticLinkedList space);
void Free_SLL(StaticLinkedList space, int index);
void Insert(StaticLinkedList space, int data);
void Delete(StaticLinkedList space, int data);
void PrintList(StaticLinkedList space);
void PrintDebugInfo(StaticLinkedList space);

int main() {
    system("chcp 936 > nul");

    // ����һ����̬����ʵ�� (���ǵġ��ڴ�ء�)
    StaticLinkedList space;

    // 1. ��ʼ������
    InitList(space);
    printf("--- 1. ��ʼ���� ---\n");
    PrintDebugInfo(space);
    printf("��������: ");
    PrintList(space);

    // 2. ����һЩ����
    printf("\n--- 2. ���� 11, 22, 33 ---\n");
    Insert(space, 11);
    Insert(space, 22);
    Insert(space, 33);
    PrintDebugInfo(space);
    printf("��������: ");
    PrintList(space);

    // 3. ɾ��һ������
    printf("\n--- 3. ɾ�� 22 ---\n");
    Delete(space, 22);
    PrintDebugInfo(space);
    printf("��������: ");
    PrintList(space);

    // 4. �ٲ���һ������
    printf("\n--- 4. ���� 44 ---\n");
    Insert(space, 44);
    PrintDebugInfo(space);
    printf("��������: ");
    PrintList(space);

    return 0;
}

/**
 * @brief ��ʼ����̬����
 * @param space ��̬��������
 * �����п��нڵ㴮��һ����������
 * space[0] ��Ϊ���������ͷ��
 * space[MAX_SIZE-1] ��Ϊ���������ͷ��
 */
void InitList(StaticLinkedList space) {
    // ��ʼ�����нڵ��������Ϊ0
    for (int i = 0; i < MAX_SIZE; ++i) {
        space[i].data = 0;
    }
    
    // ��������ͨ�ڵ㴮����һ����������
    for (int i = 0; i < MAX_SIZE - 1; ++i) {
        space[i].cursor = i + 1;
    }
    // ������������һ���ڵ�ָ��0 (��ʾ����)
    space[MAX_SIZE - 2].cursor = 0;

    // ���������ʼΪ��
    space[MAX_SIZE - 1].cursor = 0;
}

/**
 * @brief �ӱ��������з���һ�����нڵ�
 * @param space ��̬��������
 * @return ���ط��䵽�Ľڵ�������������������Ϊ���򷵻�0
 */
int Malloc_SLL(StaticLinkedList space) {
    // space[0].cursor ָ���һ�����õĿ��нڵ�
    int i = space[0].cursor;

    if (space[0].cursor) { // �����������ǿ�
        // �����������ͷָ�����
        space[0].cursor = space[i].cursor;
    }
    // ���ط��䵽�Ľڵ�����
    return i;
}

/**
 * @brief ��һ���ڵ��������������
 * @param space ��̬��������
 * @param index Ҫ���յĽڵ������
 */
void Free_SLL(StaticLinkedList space, int index) {
    // ��Ҫ���յĽڵ���α�ָ��ǰ��������ĵ�һ�����нڵ�
    space[index].cursor = space[0].cursor;
    // ���±��������ͷ��ʹ��ָ��ձ����յĽڵ�
    space[0].cursor = index;
}

/**
 * @brief ����������β������һ��Ԫ��
 * @param space ��̬��������
 * @param data Ҫ���������
 */
void Insert(StaticLinkedList space, int data) {
    // 1. ����һ���½ڵ�
    int newNodeIndex = Malloc_SLL(space);
    if (!newNodeIndex) {
        printf("�ڴ������������ʧ�ܣ�\n");
        return;
    }

    // 2. �ҵ�������������һ���ڵ�
    int current = MAX_SIZE - 1; // �����������ͷ�ڵ㿪ʼ
    while (space[current].cursor != 0) {
        current = space[current].cursor;
    }

    // 3. �����½ڵ�
    space[newNodeIndex].data = data;
    space[newNodeIndex].cursor = 0; // �½ڵ��Ϊ�µ�β�ڵ�
    space[current].cursor = newNodeIndex; // ���½ڵ����ӵ�ԭβ�ڵ�֮��
}

/**
 * @brief ������������ɾ����һ��ƥ���Ԫ��
 * @param space ��̬��������
 * @param data Ҫɾ��������
 */
void Delete(StaticLinkedList space, int data) {
    int prev = MAX_SIZE - 1; // ǰ���ڵ���������ͷ�ڵ㿪ʼ
    int current = space[prev].cursor; // ��ǰ�ڵ�����

    // ���������������Ҫɾ���Ľڵ�
    while (current != 0 && space[current].data != data) {
        prev = current;
        current = space[current].cursor;
    }

    if (current == 0) {
        printf("δ�ҵ����� %d��ɾ��ʧ�ܡ�\n", data);
        return;
    }

    // �ҵ��ˣ�ִ��ɾ������
    // 1. ��ǰ���ڵ�������ǰ�ڵ㣬ָ��ǰ�ڵ�ĺ��
    space[prev].cursor = space[current].cursor;
    // 2. ���յ�ǰ�ڵ㵽��������
    Free_SLL(space, current);
    printf("���� %d �ѱ�ɾ����\n", data);
}

/**
 * @brief ��ӡ���������е�����Ԫ��
 * @param space ��̬��������
 */
void PrintList(StaticLinkedList space) {
    int current = space[MAX_SIZE - 1].cursor; // ����������ĵ�һ����ʵ�ڵ㿪ʼ
    if (current == 0) {
        printf("����Ϊ�ա�\n");
        return;
    }
    while (current != 0) {
        printf("%d -> ", space[current].data);
        current = space[current].cursor;
    }
    printf("NULL\n");
}

/**
 * @brief ��ӡ��������ĵ�����Ϣ���Թ۲��ڲ��仯
 * @param space ��̬��������
 */
void PrintDebugInfo(StaticLinkedList space) {
    printf("---------------- ������Ϣ ----------------\n");
    printf("��������ͷ (Idx %d): cursor -> %d\n", MAX_SIZE - 1, space[MAX_SIZE - 1].cursor);
    printf("��������ͷ (Idx 0): cursor -> %d\n", space[0].cursor);
    printf("Idx\tData\tCursor\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("[%d]\t%d\t%d\n", i, space[i].data, space[i].cursor);
    }
    printf("------------------------------------------\n");
}
