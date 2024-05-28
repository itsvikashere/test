/*
Author:Vikas
Program: Merge two sorted array in single array
Date 27-05-2024
*/

#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    printf("Enter the size of first array \n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the first sorted array element \n");
    for(int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the size of second array \n");
    scanf("%d",&b);
    int arr1[b];
    printf("Enter the Second sorted array element \n");
    for(int i = 0; i < b; i++){
        scanf("%d",&arr1[i]);
    }
    int res[a+b];
    int i = 0,j = 0,l = 0;
    while(i < a && j < b){
        if(arr[i] < arr1[j]){
            res[l] = arr[i];
            i++;
            l++;
        }
        else{
            res[l] = arr1[j];
            j++;
            l++;
        }
    }
    if(a > b){
        while (i < a){
            res[l] = arr[i];
            l++;
            i++;
        }
    }
    else{
        while(j < b){
            res[l] = arr1[j];
            l++;
            j++;
        }
    }
    
    for(int i = 0; i < l;i++){
        printf("%d \t",res[i]);
    }

    return 0;
}
