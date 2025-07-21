#include <math.h>
#include <stdlib.h>
#include <stdio.h>
typedef int Number;
Number randNum(int r){
    return (rand()%r);
}

//以下是书中的算法, 用来计算平均值和标准差
//但是该算法有一个问题, 当N很大时, m1和m2的值会变得非常大, 导致精度丢失
//因此, 我们需要使用更稳定的算法来计算平均值和标准差
//可以使用Welford's method来计算平均值和标准差
int main(){
    int i,r=10;
    int N = 1e6;
    float m1 = 0.0, m2 = 0.0;
    Number x;
    for(i = 0; i < N; i++){
        x = randNum(r);
        m1 += ((float) x)/N;
        m2 += ((float) x*x)/N;
    }
    printf("Average: %f\n", m1);
    printf("Std. deviation: %f\n", sqrt(m2 - m1*m1));
    
    return 0;
    

}