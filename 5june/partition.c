/*
Author : Vikas
Program: Input a string of s of len. find the number of ways string can be partition into two non empty string. such that number of consonent in first part is grater than second.assume alphabet are in lower case.
Date - 05/06/2024
*/

#include <stdio.h>
#include<string.h>

int isVowel(char c){
    char vo[10] = {'a','e','i','o','u','A','E','I','O','U'};
    for(int i = 0; i<10;i++){
        if(vo[i] == c){
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[100];
    printf("Enter a word\n");
    scanf("%s",s);
    int n = strlen(s);
    int c = 0;
    for(int i =0; i < n;i++){
        c += isVowel(s[i]);
    }
    c = c/2;
    int curr = 0;
    int way = 0;
    for(int i = 0; i < n;i++){
        curr += isVowel(s[i]);
        if(curr > c){
            way++;
        }
    }
    printf("Number of Ways is :- %d",way);
    return 0;
}
