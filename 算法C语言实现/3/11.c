#include <stdio.h>

int main(void){
    int a[99] = {0};
    for (int i = 0; i<99; i++){
        a[i] = 98-i;
    }
    for (int i = 0; i<99; i++){
        a[i] = a[a[i]];
    }

    
}