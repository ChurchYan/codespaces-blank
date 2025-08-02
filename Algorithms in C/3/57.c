#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

  char str[200];
  printf("Please enter the string you want analysis:\n");
  fgets(str, 200, stdin);
  str[strcspn(str, "\n")] = '\0';

  int length = 0;
  char no_space[200];

  for (int i = 0; str[i] != 0; i++) {
    if (str[i] == ' ')
    {
      continue;
    }
    no_space[length] = str[i];
    length++;
  }

  bool trigger = true;
  for (int i = 0; i < length / 2; i++) {
    if (no_space[i] != no_space[length - 1 - i])
    {
      trigger = false;
      break;
    }
  }

  if (trigger) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}