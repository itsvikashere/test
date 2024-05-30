/*
 * Author: Vikas
 * Program:captalise first later of each word in a sentance and return out
 * Date - 30-05-2024
 * */
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void uppar(char* st){
    char p = toupper(st[0]);
    st[0] = p;
}

int main() {
    char s[1024];
    char *token = (char*)malloc(1024);
    printf("Enter a string\n");
    scanf("%[^\n]s",s);
    token = strtok(s," ");
    char ans[1024] = "";
    while(token){
        uppar(token);
        strcat(ans,token);
        strcat(ans, " ");
        token = strtok(NULL," ");
    }
    printf("%s\n",ans);
    return 0;
}
