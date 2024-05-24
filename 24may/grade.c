/* 
 * Author : Vikas
 * Program : Grade Determiner
 * date: 23-05-2024
 * */

#include <stdio.h>
#include <stdlib.h>


int main(){
	int t;
	printf("\n Please Enter Mark\n");
	scanf("%d",&t);
	if(t < 60){
		printf("E\n");
	}
	else if(t >= 60 && t <= 69){
		printf("D\n");
	}
	else if(t >= 70 && t <= 79){
		printf("C\n");
	}
	else if(t >= 80 && t <= 89){
		printf("B \n");
	}
	else if(t >= 90 && t <= 100){
		printf("A \n");
	}
	return 0;
}
