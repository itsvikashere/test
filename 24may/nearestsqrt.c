/*
Author: Vikas
Program: Closest whole sqare number
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
    int p= sqrt(n);
    int q = p+1;
    q = q*q;
    int t = p*p;
    if(abs(t-n) > abs(q-n)){
        printf("Closest integer having a whole number square root  is %d \n",q);
    }
    else{
        printf("Closest integer having a whole number square root is %d \n",t);
    }
    return 0;
}
