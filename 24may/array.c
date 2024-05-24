/*
 * Author: Vikas
 * Program: Array
 * Date: 24-05-2024
 * */

#include<stdio.h>

void print(int arr[], int s){
        for(int i = 0; i < s; i++){
                printf("%d\t",arr[i]);
        }
	}

void sort(int arr[],int s){
	for(int i=0; i < s;i++){
        for(int j=i+1; j < s;j++){
        if(arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }}
        }
        print(arr, s);
}

int main(){
	int s;
	printf("Enter the size of Array");
	scanf("%d",&s);
	int arr[s];
	for(int i = 0; i < s; i++){
		scanf("%d",&arr[i]);
	}
	printf("\n\n");
	print(arr,s);

	printf("Enter the choice \n");
	printf("\n 1 - Sort, 2 - search \n");
	int p = 0;
	while(p == 0){
	int c;
	scanf("%d",&c);
	if(c == 1){
		sort(arr,s);
	}
	else if(c == 2){
	printf("\n Enter the number you want to find \n");
	int t;
	int p = 0;
	scanf("%d",&t);
	for(int i = 0; i < s;i++){
	if(arr[i] == t){
		printf("\n Value is at index:  %d \n",i);
		p = 1;
	}}
	if(p == 0){
		printf("\n Value is not in present in array \n");
	}
	}
	else{
		printf("\n Exit \n");
		p = 1;
	}
	}
	return 0;

	}



