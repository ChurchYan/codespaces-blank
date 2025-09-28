#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strcpy(const char* str){
    if (str == NULL) return NULL;
    int len = strlen(str);
    char* dest = (char*)malloc(len+1);
    if (dest == NULL) return NULL;
    for (int i = 0; str[i] != 0; i++)
    {
        dest[i] = str[i];
    }
    dest[len] = '\0';
    return dest;
}

char* my_strcat(const char* s1, const char* s2){
    if (s1 == NULL || s2 == NULL) return NULL;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    char* dest = (char *)malloc(len1+len2+1);
    if (dest == NULL) return NULL;
    for (int i = 0; s1[i] != 0; i++)
    {
        dest[i] = s1[i];
    }
    for (int i = 0; s2[i] != 0; i++)
    {
        dest[len1+i] = s2[i];
    }
    dest[len1+len2] = '\0';

    return dest;
    
}


int main() {
    char* str1 = "Hello, ";
    char* str2 = "World!";
    char* copy = my_strcpy(str1);
    char* concat = my_strcat(str1, str2);

    printf("Copy: %s\n", copy);
    printf("Concat: %s\n", concat);

    free(copy);
    free(concat);
    return 0;
}