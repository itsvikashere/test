/*
Author:Vikas
Program: All Common Element in Given Two array
Date 27-05-2024
*/

#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    printf("Enter the size of first array \n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the first array element \n");
    for(int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the size of second array \n");
    scanf("%d",&b);
    int arr1[b];
    printf("Enter the Second array element \n");
    for(int i = 0; i < b; i++){
        scanf("%d",&arr1[i]);
    }
    // int res[a];
    
    for(int i = 0; i < a;i++){
        for(int j = 0; j < b; j++){
            if(arr[i] == arr1[j]){
                printf("%d\t",arr[i]);
                arr1[j] = -1;
            }
        }
    }
    

    return 0;
}
