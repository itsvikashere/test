

/* 
 * Author : Vikas
 * Program : range
 * date: 23-05-2024
 * */

#include <stdio.h>
#include <stdlib.h>


int main(){
	int n;
	printf("\n Enter Size of array \n");
	scanf("%d",&n);
	int* arr = (int*)malloc(n*sizeof(int));
	for(int i = 0; i < n;i++){
		scanf("%d Enter the number",&arr[i]);
	}
	for(int i = 0; i < n;i++){
		for(int j =i+1; j<n;j++){
			if(arr[i] >=  arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("\n %d \n ",arr[i]);
	}

	return 0;
}


