#include <stdio.h>
#define BASIC 1000
#define FIRST_LAYER 300
#define SECOND_LAYER 150
#define FIRST_TAX 0.15
#define SECOND_TAX 0.2
#define LAST_TAX 0.25
#define OVERTIME_RATIO 1.5


int main() {
    
    printf("Please input your working hour time:\n");
    float hours;
    scanf("%f", &hours);
    if(hours <0){
        return 0;
    }
    
    float total, tax, net_income;
    if (hours >40){
        total = ((hours-40)*OVERTIME_RATIO+ hours * BASIC);
    } else {
        total = hours * BASIC;
    }
    if (total < FIRST_LAYER){
        tax = total * FIRST_TAX;
    } else if (total < 450) {
        tax = (total-FIRST_LAYER)* SECOND_TAX + FIRST_LAYER*FIRST_TAX;
    }  else {
        tax = FIRST_LAYER*FIRST_TAX + SECOND_LAYER*SECOND_TAX + (total-450)*LAST_TAX;
    }
    net_income = total-tax;
    
    printf("Your total income is %.2f\n", total);
    printf("Your tax is %.2f\n", tax);
    printf("Your total net_income is %.2f\n", net_income);
    
    return 0;
}