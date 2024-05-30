/*
 * Author: Vikas
 * Program: Delete adjacent duplicate character
 * Date - 30-05-2024
 */
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void uppar(char* st){
    char p = toupper(st[0]);
    st[0] = p;
}

int main() {
    // Write C code here
    char s[1024];
    printf("Enter a word\n");
    scanf("%s",s);
    // printf("%s",s);
    int i = 0;
    int n = strlen(s);
    for(int i = 0; i < n;i++){
        int j = i+1;
        int p = 0;
        while(s[i] == s[j]){
            s[j] = -1;
            j++;
            p = 1;
        }
        if(p == 1){
            s[i] = -1;
        }
        else if(s[i] == -1){
            continue;
        }
        else{
            printf("%c",s[i]);
        }
    }
     printf("\n");
    // for(int i = 0; i < n;i++){
    //     if(s[i] != -1){
    //         printf("%ch",s[i]);
    //     }
    // }
    return 0;
}
