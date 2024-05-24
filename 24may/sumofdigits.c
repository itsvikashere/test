/*
Author: Vikas
Program: Sum of all the digit of the number
Date: 24-05-2024
*/

#include <stdio.h>

int main() {
    // Write C code here
    printf("Enter a Positive Number \n");
    int n;
    scanf("%d",&n);
    int s = 0;
    while(n > 0){
        int temp = n%10;
        s = s+temp;
        n = n/10;
    }
    printf("The sum is: %d \n",s);
    return 0;
}
