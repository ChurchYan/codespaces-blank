#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

  char str[200];
  printf("Please enter the string you want analysis:\n");
  fgets(str, 200, stdin);
  str[strcspn(str, "\n")] = '\0';

  char one_blank[200];
  int length = 0;
  for (int i = 0; str[i] != 0; i++)
  {
    if (str[i] == ' ' && length > 0 && one_blank[length-1] == ' '){
        continue;
    }
    one_blank[length] = str[i];
    length++;
  }
  one_blank[length] = '\0';
  printf("Your input with one blank is:\n%s", one_blank);
  

  return 0;
}