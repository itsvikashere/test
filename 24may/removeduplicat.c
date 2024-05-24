/*
Author: Vikas
Program: Remove duplicat no. from array
Date: 24-05-2024
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
        printf("\n");
        int l = 0;
        for(int i = 0; i <s;i++){
            for(int j =i+1; j <s; j++){
                if (arr[i] == arr[j] && arr[j] != -1){
                    arr[j] = -1;
                    l++;
                }
            }
        }
        int q = s - l;
        int ans[q];
        for(int i =0; i < q; i++){
            if(arr[i] != -1){
                ans[i] = arr[i];
            }
        }
        
        for(int i = 0; i <q;i++){
            printf("%d\t",ans[i]);
        }
        
        printf("\n");
    
    
    return 0;
}
