/*
Author: Vikas
Program: Automorphic number
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
    long long int sq = n*n;
    int a = 0;
    while(n > 0){
        int p = n%10;
        int q = sq%10;
        if(p != q){
            a = 1;
            break;
        }
        else{
            n = n/10;
            sq = sq/10;
        }
    }
    if(a == 0){
        printf("Yes, the number is an Automorphic number \n");
    }
    else{
        printf("No, the number is not an Automorphic number \n");
    }
    
    return 0;
}
