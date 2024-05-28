/*
Author: Vikas
Program: rotate an array of n elements to the right by k steps.
Date: 28-05-2024
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Write C code here
    int n,k;
    printf("Enter the size of array and k \n");
    scanf("%d%d",&n,&k);
    int arr[n];
    printf("Enter the Array element \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    k = k%n;
    int i = 0;
    int j = n-1;
    while(i <= j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    i = 0;
    j =k-1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    i = k;
    j = n-1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i = 0; i < n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
