/*
Author : Vikas
Program: input a sentance and find the unique word.consider anagram also dublicate.
Date - 05/06/2024
*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int anag(char *str1, char *str2){
	int a = strlen(str1);
	int b = strlen(str2);
	
	if(a != b){
	    return 0;
	}
	int freq[256] = {0};
    for(int i = 0;i < a;i++){
        freq[str1[i]] += 1;
    }
    for(int i = 0;i < b;i++){
        freq[str2[i]] -= 1;
    }
    
    for(int i = 0; i < 256;i++){
        if(freq[i] != 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[100];
    char word[100][100];
    printf("Enter a Sentance\n");
    scanf(" %[^\n]s",s);
    int n = strlen(s);
    char *token = (char*)malloc(sizeof(char*));
    token = strtok(s," ");
    int p = 0;
    while(token){
        strcpy(word[p],token);
        token = strtok(NULL," ");
        p++;
    }
    char ans[100];
    for(int i = 0; i < p ;i++){
        int temp = 0;
        for(int j = 0; j < p; j++){
            if(i!=j){
                temp = anag(word[i],word[j]);
                if(temp == 1){
                    break;
                }
            }
        }
        if(temp == 0){
            strcat(ans,word[i]);
            strcat(ans," ");
        }
    }
    printf("%s",ans);
    return 0;
}

