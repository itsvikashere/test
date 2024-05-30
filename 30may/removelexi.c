/*
 * Author: Vikas
 * Program: given string choose lexicographically consecastive charater and delete both. delete onely one pair at time
 * Date: 30-05-2024
 * */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[1024];
	printf("Enter a word\n");
	scanf("%s",str);
	int n = strlen(str);
    // for(int i = 0; i < n;i++){
    //     printf("%d\n",str[i]);
    // }
    int i = 0;
    while(1){
        if(i == n-1){
            break;
        }
        if(str[i]+1 == str[i+1] && str[i] != -1){
            str[i] = -1;
            str[i+1] = -1;
            i = 0;
        }
        else if(str[i] != -1 && str[i+1] == -1){
            int j = i+1;
            while(str[j] == -1 && j < n){
                j++;
            }
            if(str[i]+1 == str[j]){
                str[i] = -1;
                str[j] = -1;
                i = 0;
            }
            else{
                i++;
            }
        }
        else{
            i++;
        }
    }
    for(int i = 0; i < n;i++){
        if(str[i] != -1){
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}
