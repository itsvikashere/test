/*
Author : Vikas
Program: first input is int n. take n line of input. in each line take a pair of time inpute in this format {hh,mm,sec}. compare each line and return last, onetime or early.
Date - 05/06/2024
*/

#include <stdio.h>
#include<string.h>

int comp(char *t1,char *t2){
    if(strncmp(t1,t2,2) != 0){
        return strncmp(t1,t2,2);
    }
    else if(strncmp(t1+3,t2+3,2) != 0){
        return strncmp(t1+3,t2+3,2);
    }
    else{
        return strncmp(t1+6,t2+6,2);
    }
}

int main() {
    int n;
    printf("Enter the number of line\n");
    scanf("%d",&n);
    int ans[100];
    for(int i = 0; i < n; i++){
        char s[100];
        printf("Enter the pair time: -\n");
        scanf(" %[^\n]",s);
        char t1[100] = "", t2[100] = "";
        strncpy(t1,s,8);
        strncpy(t2,s+9,8);
        ans[i] = comp(t1,t2);
    }
    for(int i=0; i < n;i++){
        if(ans[i] == 0){
            printf("On time \n");
        }
        else if(ans[i] > 0){
            printf("Before time \n");
        }
        else{
            printf("Late \n");
        }
    }
    return 0;
}

