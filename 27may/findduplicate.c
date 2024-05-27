/*
Author: Vikas
Program: Find dublicat element in array,
Date - 27-05-2024
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int s;
        printf("Enter the size of Array \n");
        scanf("%d",&s);
        int arr[s];
        for(int i = 0; i < s; i++){
                scanf("%d",&arr[i]);
        }
        printf("Duplicat Elements are :-\n");
        int l = 0;
        for(int i = 0; i <s;i++){
            for(int j =i+1; j <s; j++){
                if (arr[i] == arr[j] && arr[j] != -1){
                    printf("%d \t",arr[i]);
                    arr[j] = -1;
                    l++;
                }
            }
        }

        
        printf("\n");
    
    
    return 0;
}
