/* 
Author: Vikas
Program: Celsius to Fahrenheit
Date: 24/05/2024
*/
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter the Temperature in Celsius: \n");
    scanf("%d",&n);
    float res;
    res = (n*1.8) + 32;
    printf("Temperature in Fahrenheit is: %f\n",res);
    return 0;
}
