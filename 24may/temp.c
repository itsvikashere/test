/* 
 * Author : Vikas
 * Program : Temperature Advice
 * date: 23-05-2024
 * */

#include <stdio.h>
#include <stdlib.h>


int main(){
	int t;
	printf("\n Please Enter Temperature\n");
	scanf("%d",&t);
	if(t < 10){
		printf("It's cold outside, stay warm!\n");
	}
	else if(t >= 10 && t <= 19){
		printf("It's a bit chilly, wear a jacket.\n");
	}
	else if(t >= 20 && t <= 30){
		printf("The weather is nice and warm\n");
	}
	else if(t > 30){
		printf("It's hot outside, stay hydrated! \n");
	}
	return 0;
}
