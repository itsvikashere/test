/*
Author: Vikas
Program : You need to find the score of str as per the following rules:
1) For each palindrome of length 4 in str, add 5 to the score
2) For each palindrome of length 5 in str, add 10 to the score
Date : 04-06-2024
*/

#include <stdio.h>
#include<string.h>

int main() {
    // Write C code here
    char s[100];
    printf("Enter the string");
    scanf("%s",s);
    int n = strlen(s);
    int ans = 0;
    for(int i = 0; i <= n-3; i++){
        int j = 3+i;
        int c = 0;
        int p = i;
        while(p < j){
            if(s[p] != s[j]){
                c = 1;
                break;
            }
            else{
                p++;
                j--;
            }
        }
        if(c == 0){
            ans += 5;
        }
    }
    
    for(int i = 0; i <= n-4; i++){
        int j = 4+i;
        int c = 0;
        int p = i;
        while(p < j){
            if(s[p] != s[j]){
                c = 1;
                break;
            }
            else{
                p++;
                j--;
            }
        }
        if(c == 0){
            ans += 10;
        }
    }
    printf("Score is %d",ans);
    return 0;
}

