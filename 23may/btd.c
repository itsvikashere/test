/*
Author: Vikas
Program: Binary to decial
Date: 23-05-2024
*/

#include <stdio.h>

int main() {
    // Write C code here
    char str[100];
    printf("Enter a binar number \n");
    scanf("%s",str);
    int num = 0;
    int i = 0;
    
    while(str[i] != '\0'){
	num = 2*num;
        num = (str[i] - '0') + num;
        i++;
    }
    printf("Decimal no. is: %d \n",num);

    return 0;
}
