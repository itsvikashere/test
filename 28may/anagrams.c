// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

int main() {
    // Write C code here
    char str1[SIZE];
    char str2[SIZE];
	printf("Enter First text\n");
	scanf("%s",str1);
	
	printf("Enter Second text\n");
	scanf("%s",str2);
	int a = strlen(str1);
	int b = strlen(str2);
	
	if(a != b){
	    printf("Two strings are not anagrams\n");
	    exit(0);
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
	    printf("Two strings are not anagrams\n");
	    exit(0);
        }
    }
    printf("Two strings are anagrams\n");
    return 0;
}
