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

int main(void){
    int width = 15;
    printf("控制printf输出字段宽度的方法示例:\n\n");
    printf("%*s", width, "a. add");
    printf("%*s\n", width, "s. subtract");
    printf("%*s", width, "m. multiply");
    printf("%*s\n",width, "d. divide");
    printf("%*s", width, "q. quit")

    char ch;
    while( (ch = getchar()) != 'q'){
        select (ch){
            case: 'a'

                break;
            case: 'b'

                break;
            case: 'c'

                break;
            case: 'd'

                break;
            default:
                break;
        }
    }
    printf("Bye\n");
    
    return 0;
}

void add(){
    printf("Enter first number:\n");
    float f;
    if(scanf("%f", &f) != 1){
        printf("")
    }


}