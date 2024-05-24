/*
Author: Vikas
Program: Armstrong number
Date: 24-05-2024
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Write C code here
    printf("Enter a Positive Number \n");
    int n;
    scanf("%d",&n);
    int sum = 0;
    int digit = 0;
    int num = n;
    int val = n;
    while(n > 0){
        n = n/10;
        digit++;
    }
    
    while(num>0){
        int r = num%10;
        sum += pow(r,digit);
        num = num/10;
    }
    if(val == sum){
        printf("Yes, the number is an Armstrong number \n");
    }
    else{
        printf("No, the number is not an Armstrong number \n");
    }
    
    return 0;
}
