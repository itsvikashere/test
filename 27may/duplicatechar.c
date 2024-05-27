/*
Author: Vikas
Program: Remove Duplicate character from string,
Date - 27-05-2024
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 100

int main() {
    char str[SIZE];
    printf("Enter the word\n");
    scanf("%s",str);
    printf("\n");
    // printf("%s",str);
    char ans[SIZE];
    int k = 0;
    int l = strlen(str);
    for(int i = 0;i < l;i++){
        int c = 0;
        for(int j = 0; j <= i; j++){
            if(tolower(str[i]) == tolower(str[j])){
                c++;
            }
        }
        if(c == 1){
            ans[k++] = str[i];
        }
    }
    printf("After Removing Duplicate Character From string \n");
    printf("%s\n",ans);
    return 0;
}
