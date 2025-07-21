#define N 10000
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void filter_prime_char(void){
    int i,j;
    char a[N];
    for (i = 2; i<N; i++){
        a[i] = '1';
    }
    for (i = 2; i<N; i++){
        if (a[i] == '1'){
            for (j = i; i*j < N; j++)
            {
                a[i*j] = '0';
            }
        }
    }
    for (i = 2; i<N; i++){
        if (a[i] == '1'){
            printf("4%d ", i);
        }
    }
    printf("\n");

    return ;
}

void filter_prime_int(void){
    int i,j, a[N];
    for (i = 2; i<N; i++){
        a[i] = 1;
    }
    for (i = 2; i<N; i++){
        if (a[i]){
            for (j = i; i*j < N; j++)
            {
                a[i*j] = 0;
            }
        }
    }
    for (i = 2; i<N; i++){
        if (a[i]){
            printf("4%d ", i);
        }
    }
    printf("\n");

    return ;
}

void print_memory_usage() {
    FILE* file = fopen("/proc/self/status", "r");
    if (!file) return;
    char line[128];
    while(fgets(line, 128, file) != NULL){
        if (strncmp(line, "VmRSS:", 6) == 0){
            printf("%s", line); // 例如：VmRSS:     12345 kB
            break;
        }
    }
    fclose(file);
}

int main(void){
    clock_t start, end;
    start = clock();

    // ... 你的原始算法代码 ...
    filter_prime();

    end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("运行时间: %f 秒\n", cpu_time_used);

    print_memory_usage();

    return 0;
}

