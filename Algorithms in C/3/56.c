#include <stdio.h>
int main()
{
    int lower[26] = {0} ;
    int upper[26] = {0} ;
    
    char str[200];
    printf("Please enter the string you want analysis:\n");
    scanf("%s", str);
    
    for(int i = 0; str[i] != 0; i++){
      if (str[i] >= 65 && str[i] <= 90){
        upper[str[i]-65] += 1;
      } else if (str[i] >= 97 && str[i] <= 122) {
        lower[str[i]-97] += 1;
      } else {
        continue;
      }
      
    }
    
    for(int i = 0; i< 26; i++){
      if (lower[i] == 0 ){
        continue;
      }
      printf("%c: %d\n",97+i, lower[i]);
    }
    printf("\n");
    for(int i = 0; i< 26; i++){
      if (upper[i] == 0 ){
        continue;
      }
      printf("%c: %d\n",65+i, upper[i]);
    }
    
    return 0;
    
}