/*
Author: Vikas
Program: Check if the given string is Palindrome
Date: 28-05-2024
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

int main() {
    // Write C code here
    char str1[SIZE];
	printf("Enter String text\n");
	scanf("%s",str1);

	int i = 0;
	int j = strlen(str1);
	while(i < j){
	    if (str1[i] != str1[j-1]){
	        printf("The Given string is not palindrome");
	        exit(0);
	    }
	    i++;
	    j--;
	}
	printf("The Given String is Palindrome");
    return 0;
}
