/*
Author: Vikas
Program : Write a C program to replace first occurrence of a character with another character in a string.
Date : 04-06-2024
*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    // Write C code here
    char s[100];
    char r;
    char f;
    printf("Enter the sentance: \n");
    scanf("%[^\n]",s);
    printf("Enter the character to be replace: \n");
    scanf(" %c",&r);
    printf("Enter the character to replace: \n");
    scanf(" %c",&f);
    
    int n = strlen(s);
    for(int i = 0; i < n;i++){
        if(s[i] == r){
            s[i] = f;
            break;
        }
    }
    printf("%s\n",s);
    return 0;
}
