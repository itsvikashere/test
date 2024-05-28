#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strrev(char*);
int main(){
	char line[1024];
	char *token = (char*)malloc(1024);
	printf("Enter a line of text\n");
	scanf("%[^\n]s",line);
	printf("%s\n",line);
	token = strtok(line,".");
	while(token != NULL){
		strrev(token);
		printf("%s\n",token);
		token = strtok(NULL,".");
	}
	printf("\n\n");
	return EXIT_SUCCESS;
}

void strrev(char* token){
	int i=0,j;
	char t;
	int len = strlen(token);
	j = len -1;
	while(i<j){
	t = token[i];
	token[i] = token[j];
	token[j] = t;
	i++;
	j--;
	}
}
