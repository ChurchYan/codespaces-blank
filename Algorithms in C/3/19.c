#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 计算一次实验出现重复前的次数
int experiment_once(int range) {
    int *arr = (int *)calloc(range, sizeof(int));
    int count = 0;
    int times = 0;
    while (1) {
        count++;
        int num = rand() % range; // 0 ~ range-1
        if (arr[num] == 0) {
            arr[num] = 1;
            times += 1;
        } else {
            continue;
        }
        if (times == 1000){
          break;
        }
    }
    free(arr);
    return count;
}

int main() {
    int range = 1000; // 随机数范围
    int experiments=100;   // 实验总次数

    srand(time(NULL));

    long long total = 0;
    for (int i = 0; i < experiments; i++) {
        int result = experiment_once(range);
        total += result;
    }
    double average = (double)total / experiments;
    printf("经过%d次实验平均需要 %f 次才能出现重复。\n",experiments, average);

    return 0;
}