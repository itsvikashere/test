/*
Author: Vikas
Program: Lexicographic sorting of the given string
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
    char temp[50];
    for(int i=0; i < n;i++){
        for(int j = i+1;j < n;j++){
            if(strcmp(str[i],str[j]) > 0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("Lexicographi order is: \n");
	for(int i = 0 ; i <n;i++){
	    printf("%s ",str[i]);
	}
	printf("\n");
    return 0;
}
