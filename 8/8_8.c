#include <stdio.h>

// // 方法1: 使用 %10s 控制字符串宽度（右对齐）
    // printf("右对齐: |%10s|\n", "Hello");
    // // 方法2: 使用 %-10s 控制字符串宽度（左对齐）
    // printf("左对齐: |%-10s|\n", "Hello");
    // // 方法3: 使用 %10d 控制整数宽度（右对齐）
    // printf("整数右对齐: |%10d|\n", 123);
    // // 方法4: 使用 %-10d 控制整数宽度（左对齐）
    // printf("整数左对齐: |%-10d|\n", 123);
    // // 方法5: 使用 %10.2f 控制浮点数宽度和精度
    // printf("浮点数: |%10.2f|\n", 3.14159);
    // // 方法6: 使用 %010d 用0填充（适用于数字）
    // printf("0填充: |%010d|\n", 123);
    // // 方法7: 使用变量控制宽度
    // int width = 10;
    // printf("变量控制宽度: |%*s|\n", width, "Test");

void printMenu(void);
float getNumber();

int main(void){
    
    printMenu();

    float first;
    float last;

    char ch;
    while( (ch = getchar()) != 'q'){
        switch(ch)
        {
            case 'a':
                printf("Please Enter the First Number: ");
                first = getNumber();
                printf("Please Enter the Second Number: ");
                last = getNumber();
                printf("%f + %f = %f\n", first, last, first + last);
                printMenu();
                break;
            case 'b':
                printf("Please Enter the First Number: ");
                first = getNumber();
                printf("Please Enter the Second Number: ");
                last = getNumber();
                printf("%f - %f = %f\n", first, last, first - last);
                printMenu();
                break;
            case 'c':
                printf("Please Enter the First Number: ");
                first = getNumber();
                printf("Please Enter the Second Number: ");
                last = getNumber();
                printf("%f * %f = %f\n", first, last, first * last);
                printMenu();
                break;
            case 'd':
                printf("Please Enter the First Number: ");
                first = getNumber();
                printf("Please Enter the Second Number: ");
                
                while ((last = getNumber()) == 0)
                {
                    printf("Please Enter a number other than 0:");
                    last = getNumber();
                }
                
                printf("%f / %f = %f\n", first, last, first / last);
                printMenu();
                break;
            default:
                printf("Please Enter the correct character: ");
                break;
        }
    }
    printf("Bye\n");
    
    return 0;
}

void printMenu(void){
    int width = 15;
    printf("Enter the operation of your voice:\n");
    printf("%-*s", width, "a. add");
    printf("%-*s\n", width, "b. subtract");
    printf("%-*s", width, "c. multiply");
    printf("%-*s\n",width, "d. divide");
    printf("%-*s\n", width, "q. quit");
}

float getNumber(){
    float f;
    char ch;
    while (scanf("%f", &f) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);
        }
        printf(" is not a valid number.\n");
        printf("Please Enter a valid number, such as 2.5, -1.78E8 or 3: ");
        
    }
    
    return f;

}