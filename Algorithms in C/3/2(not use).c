#include <stdio.h>
#include "RandNum.h"

int main(void){
    printf("Random number: %d\n", RandNum(100));
    
    return 0;
}

//由于线上编译器如果引用其他.h文件, 需要手动编译, 以后代码全部放在一个文件中