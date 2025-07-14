#include <stdio.h>

double min(double, double);

int main(void){
    double x, y;

    printf("Please input two number:\n");
    scanf("%lf %lf", &x, &y);

    printf("The minor one between your input is %lf", min(x, y));

    return 0;
}

double min(double x, double y){
    if (x <= y)
    {
        return x;
    }else
    {
        return y;
    }
}