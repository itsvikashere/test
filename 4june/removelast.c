/*
Author: Vikas
Program : Write a C program to remove from last occurrence of a word in given string
Date : 04-06-2024
*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    // Write C code here
    char s[100];
    char f[20];
    printf("Enter the sentance: \n");
    scanf("%[^\n]",s);
    printf("Enter the word to delete: \n");
    scanf("%s",f);
    
    int n = strlen(s);
    int ans = -1;
    char temp[100];
    strcpy(temp,s);
    char *token = (char*)malloc(sizeof(char *));
    int j = 0;
    token = strtok(temp," ");
    while(token){
        if(strcmp(token,f) == 0){
            if(j > ans){
                ans = j;
            }
        }
        j++;
        token = strtok(NULL," ");
    }
    
    strcpy(temp,s);
    char p[100] = "";
    int x = 0;
    token = strtok(temp," ");
    while(token){
    if(ans != -1){
        if(x == ans){
            x++;
            token  = strtok(NULL," ");
            continue;
        }
        else{
            strcat(p,token);
            strcat(p," ");
            token  = strtok(NULL," ");
            x++;
        }
    }
    }
    printf("%s",p);
    return 0;
}

