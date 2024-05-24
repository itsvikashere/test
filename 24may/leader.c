/*
Author: Vikas
Program: find the leaders in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader
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
        s = s -1;
        int r = arr[s];
        int ans[s];
        int l = 1;
        ans[0] = r;
        while(s >= 0){
            if(arr[s] > r){
                ans[l] = arr[s];
                r = arr[s];
                l++;
                s--;
            }
            else{
                s--;
            }
        }
        for(int i = 0; i < l; i++){
                printf("%d\t",ans[i]);
        }
        printf("\n");
        
    return 0;
}
