/*
Author: Vikas
Program: Reverse the order of the given string
Date: 28-05-2024
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strrev(char*);
int main(){
	char line[1024];
	char *token = (char*)malloc(1024);
	printf("Enter a line of text\n");
	scanf("%[^\n]s",line);
	token = strtok(line," ");
	char str[100][100];
	int n = 0;
	while(token != NULL){
	    strcpy(str[n],token);
		token = strtok(NULL," ");
		n++;
	}
// 	int n = strlen(str);
	for(int i = n-1 ; i >=0;i--){
	    printf("%s ",str[i]);
	}
	printf("\n");
    return 0;
}
