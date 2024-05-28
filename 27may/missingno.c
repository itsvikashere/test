/*
Author:Vikas
Program: Find Missing Number in given array of N number
Date 27-05-2024
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array element \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    n = n+1;
    int s1 = n*(n+1)/2;
    int s2 = 0;
    for(int i = 0; i < n-1;i++){
        s2 += arr[i];
    }
    printf("Missing No. is %d \n",s1-s2);

    return 0;
}
