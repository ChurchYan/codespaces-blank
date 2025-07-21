#include <stdio.h>
int main()
{   
    int min, max;
    printf("Please input minum number:\n");
    scanf("%d", &min);
    printf("Please input maxium number:\n");
    scanf("%d", &max);
    if (min > max){
      return 0;
    }
    // printf("min:%d, max:%d", min, max);
    for(int i=min; i<=max;i++){
      printf("%d %d %d", i, i*i, i*i*i);
      printf("\n");
    }
    return 0;
    
}