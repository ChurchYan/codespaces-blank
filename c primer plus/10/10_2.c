#include <stdio.h>
#include <string.h>
#include <assert.h>

void copy_arr( double [], double [], int );
void copy_ptr(double *, double *, int );
void copy_ptrs(double *, double *, double *);

int main(void){
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source+5);

    // Print arrays
    printf("source:  ");
    for(int i=0; i<5; i++) printf("%.1f ", source[i]);
    printf("\ntarget1: ");
    for(int i=0; i<5; i++) printf("%.1f ", target1[i]);
    printf("\ntarget2: ");
    for(int i=0; i<5; i++) printf("%.1f ", target2[i]);
    printf("\ntarget3: ");
    for(int i=0; i<5; i++) printf("%.1f ", target3[i]);
    printf("\n");

    // Unit tests
    assert(memcmp(target1, source, sizeof(source)) == 0);
    assert(memcmp(target2, source, sizeof(source)) == 0);
    assert(memcmp(target3, source, sizeof(source)) == 0);

    printf("All tests passed!\n");
    return 0;
}

void copy_arr(double target[], double source[], int n){
    do
    {
        n--;
        target[n] = source[n];
    } while (n>0);
    
    return;
}

void copy_ptr( double * target, double * source, int n){
    do
    {
        n--;
        *(target+n) = *(source+n);
    } while (n>0);
    return;
}

void copy_ptrs(double * target, double * source, double * last){
    int i=0;
    while ((source + i) < last)
    {
        *(target + i) = *(source + i);
        i++;
    }
    
    return;
}