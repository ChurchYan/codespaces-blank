/*******************************************************************************
 * 核心思想
 * 
 * 节点结构：定义一个结构体数组。每个结构体元素代表一个链表节点。
 * 这个结构体除了包含常规的 data（数据域）外，还需要一个**"游标"（cursor）
 * 来代替指针，这个游标存储的是下一个节点在数组中的下标**。
 *
 * 两个链表：巧妙地利用一个数组管理两个链表：
 *
 * 备用链表（Free List）：一个由所有未被使用的数组元素组成的链表。
 * 当需要"分配"新节点时，就从这个备用链表的头部取一个。
 * 
 * 数据链表（Data List）：一个由正在被使用的数组元素组成的链表，
 * 用于存储实际数据。
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// 定义数组的最大容量，即内存池的大小
#define MAX_SIZE 10

// 定义静态链表的节点结构
typedef struct {
    int data;     // 数据域
    int cursor;   // 游标(cursor)，用来模拟指针，存放下一个节点的数组下标
} Node;

// 定义静态链表类型，它本质上是一个结构体数组
typedef Node StaticLinkedList[MAX_SIZE];

// 函数声明
void InitList(StaticLinkedList space);
int Malloc_SLL(StaticLinkedList space);
void Free_SLL(StaticLinkedList space, int index);
void Insert(StaticLinkedList space, int data);
void Delete(StaticLinkedList space, int data);
void PrintList(StaticLinkedList space);
void PrintDebugInfo(StaticLinkedList space);

int main() {
    system("chcp 936 > nul");

    // 声明一个静态链表实例 (我们的“内存池”)
    StaticLinkedList space;

    // 1. 初始化链表
    InitList(space);
    printf("--- 1. 初始化后 ---\n");
    PrintDebugInfo(space);
    printf("数据链表: ");
    PrintList(space);

    // 2. 插入一些数据
    printf("\n--- 2. 插入 11, 22, 33 ---\n");
    Insert(space, 11);
    Insert(space, 22);
    Insert(space, 33);
    PrintDebugInfo(space);
    printf("数据链表: ");
    PrintList(space);

    // 3. 删除一个数据
    printf("\n--- 3. 删除 22 ---\n");
    Delete(space, 22);
    PrintDebugInfo(space);
    printf("数据链表: ");
    PrintList(space);

    // 4. 再插入一个数据
    printf("\n--- 4. 插入 44 ---\n");
    Insert(space, 44);
    PrintDebugInfo(space);
    printf("数据链表: ");
    PrintList(space);

    return 0;
}

/**
 * @brief 初始化静态链表
 * @param space 静态链表数组
 * 将所有空闲节点串成一个备用链表。
 * space[0] 作为备用链表的头。
 * space[MAX_SIZE-1] 作为数据链表的头。
 */
void InitList(StaticLinkedList space) {
    // 初始化所有节点的数据域为0
    for (int i = 0; i < MAX_SIZE; ++i) {
        space[i].data = 0;
    }
    
    // 将所有普通节点串联成一个备用链表
    for (int i = 0; i < MAX_SIZE - 1; ++i) {
        space[i].cursor = i + 1;
    }
    // 备用链表的最后一个节点指向0 (表示结束)
    space[MAX_SIZE - 2].cursor = 0;

    // 数据链表初始为空
    space[MAX_SIZE - 1].cursor = 0;
}

/**
 * @brief 从备用链表中分配一个空闲节点
 * @param space 静态链表数组
 * @return 返回分配到的节点的索引，如果备用链表为空则返回0
 */
int Malloc_SLL(StaticLinkedList space) {
    // space[0].cursor 指向第一个可用的空闲节点
    int i = space[0].cursor;

    if (space[0].cursor) { // 如果备用链表非空
        // 将备用链表的头指针后移
        space[0].cursor = space[i].cursor;
    }
    // 返回分配到的节点索引
    return i;
}

/**
 * @brief 将一个节点回收至备用链表
 * @param space 静态链表数组
 * @param index 要回收的节点的索引
 */
void Free_SLL(StaticLinkedList space, int index) {
    // 将要回收的节点的游标指向当前备用链表的第一个空闲节点
    space[index].cursor = space[0].cursor;
    // 更新备用链表的头，使其指向刚被回收的节点
    space[0].cursor = index;
}

/**
 * @brief 在数据链表尾部插入一个元素
 * @param space 静态链表数组
 * @param data 要插入的数据
 */
void Insert(StaticLinkedList space, int data) {
    // 1. 分配一个新节点
    int newNodeIndex = Malloc_SLL(space);
    if (!newNodeIndex) {
        printf("内存池已满，插入失败！\n");
        return;
    }

    // 2. 找到数据链表的最后一个节点
    int current = MAX_SIZE - 1; // 从数据链表的头节点开始
    while (space[current].cursor != 0) {
        current = space[current].cursor;
    }

    // 3. 插入新节点
    space[newNodeIndex].data = data;
    space[newNodeIndex].cursor = 0; // 新节点成为新的尾节点
    space[current].cursor = newNodeIndex; // 将新节点链接到原尾节点之后
}

/**
 * @brief 从数据链表中删除第一个匹配的元素
 * @param space 静态链表数组
 * @param data 要删除的数据
 */
void Delete(StaticLinkedList space, int data) {
    int prev = MAX_SIZE - 1; // 前驱节点索引，从头节点开始
    int current = space[prev].cursor; // 当前节点索引

    // 遍历数据链表查找要删除的节点
    while (current != 0 && space[current].data != data) {
        prev = current;
        current = space[current].cursor;
    }

    if (current == 0) {
        printf("未找到数据 %d，删除失败。\n", data);
        return;
    }

    // 找到了，执行删除操作
    // 1. 让前驱节点跳过当前节点，指向当前节点的后继
    space[prev].cursor = space[current].cursor;
    // 2. 回收当前节点到备用链表
    Free_SLL(space, current);
    printf("数据 %d 已被删除。\n", data);
}

/**
 * @brief 打印数据链表中的所有元素
 * @param space 静态链表数组
 */
void PrintList(StaticLinkedList space) {
    int current = space[MAX_SIZE - 1].cursor; // 从数据链表的第一个真实节点开始
    if (current == 0) {
        printf("链表为空。\n");
        return;
    }
    while (current != 0) {
        printf("%d -> ", space[current].data);
        current = space[current].cursor;
    }
    printf("NULL\n");
}

/**
 * @brief 打印整个数组的调试信息，以观察内部变化
 * @param space 静态链表数组
 */
void PrintDebugInfo(StaticLinkedList space) {
    printf("---------------- 调试信息 ----------------\n");
    printf("数据链表头 (Idx %d): cursor -> %d\n", MAX_SIZE - 1, space[MAX_SIZE - 1].cursor);
    printf("备用链表头 (Idx 0): cursor -> %d\n", space[0].cursor);
    printf("Idx\tData\tCursor\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("[%d]\t%d\t%d\n", i, space[i].data, space[i].cursor);
    }
    printf("------------------------------------------\n");
}
