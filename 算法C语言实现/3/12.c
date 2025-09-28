#define N 50000000
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define BITS_PER_BYTE 8

#define SET_BIT(arr, k) (arr[(k)/BITS_PER_BYTE] |= (1 << ((k)%BITS_PER_BYTE)))
#define CLR_BIT(arr, k) (arr[(k)/BITS_PER_BYTE] &= ~(1 << ((k)%BITS_PER_BYTE)))
#define GET_BIT(arr, k) (arr[(k)/BITS_PER_BYTE] & (1 << ((k)%BITS_PER_BYTE)))

void filter_prime_bit(void){
    int i, j;
    int size = (N + BITS_PER_BYTE - 1) / BITS_PER_BYTE;
    static unsigned char a[(N + BITS_PER_BYTE - 1) / BITS_PER_BYTE];
    memset(a, 0xFF, size);

    for (i = 2; i < N; i++){
        if (GET_BIT(a, i)){
            for (j = 2; i*j < N; j++) {
                CLR_BIT(a, i*j);
            }
        }
    }

    return ;
}

void filter_prime_char(void){
    int i,j;
    static char a[N];  // 使用static避免栈溢出
    for (i = 2; i<N; i++){
        a[i] = '1';
    }
    for (i = 2; i<N; i++){
        if (a[i] == '1'){
            for (j = 2; i*j < N; j++)
            {
                a[i*j] = '0';
            }
        }
    }

    return ;
}

void filter_prime_int(void){
    int i,j;
    static int a[N]; 
    for (i = 2; i<N; i++){
        a[i] = 1;
    }
    for (i = 2; i<N; i++){
        if (a[i]){
            for (j = 2; i*j < N; j++)
            {
                a[i*j] = 0;
            }
        }
    }

    return ;
}

void print_memory_usage() {
    FILE* file = fopen("/proc/self/status", "r");
    if (!file) return;
    char line[128];
    while(fgets(line, 128, file) != NULL){
        if (strncmp(line, "VmRSS:", 6) == 0){
            printf("%s", line); 
            break;
        }
    }
    fclose(file);
}

int main(void){
    clock_t start, end;
    double cpu_time_used;
    printf("测试 filter_prime_bit:\n");
    start = clock();
    filter_prime_bit();
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("运行时间: %f 秒\n", cpu_time_used);
    print_memory_usage();
    printf("\n");

    printf("测试 filter_prime_char:\n");
    start = clock();
    filter_prime_char();
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("运行时间: %f 秒\n", cpu_time_used);
    print_memory_usage();
    printf("\n");

    printf("测试 filter_prime_int:\n");
    start = clock();
    filter_prime_int();
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("运行时间: %f 秒\n", cpu_time_used);
    print_memory_usage();
    printf("\n");

    return 0;
}

