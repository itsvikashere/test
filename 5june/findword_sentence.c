/*
Author : Vikas
Program: write a program that take first input as a string, 2nd input contain character and 3rd input is substring with one char. search the char in the main string, if find return first positon of the char. do the same for the substring . return the sum of the both position. if both is not found return -2.

Date - 05/06/2024
*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
    char s[100], w[100], ch;
    printf("Enter a Sentance\n");
    scanf(" %[^\n]",s);
    printf("Enter a Word\n");
    scanf(" %s",w);
    printf("Enter a Character\n");
    scanf(" %c",&ch);
    int n = strlen(s);
    int l = strlen(w);
    int flag = -1;
    int ans = -1;
    for(int i = 0; i < l;i++){
        if(w[i] == ch){
            ans = i+1;
            break;
        }
    }
    char *token = (char*)malloc(sizeof(char*));
    token = strtok(s," ");
    int p = 0;
    while(token){
        if(strcmp(w,token) == 0){
            flag = p+1;
            break;
        }
        token = strtok(NULL," ");
        p++;
    }
    printf("%d",ans+flag);
    return 0;
}
