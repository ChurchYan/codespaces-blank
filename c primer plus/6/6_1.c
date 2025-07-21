#include <stdio.h>

int main(void){
    char arr[26];

    char s = 'a';
    for( int i = 0; (i<26); i++){
        arr[i] = s+i;
        printf("%s\n", arr);
    }

}