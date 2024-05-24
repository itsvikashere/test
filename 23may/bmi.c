


/* 
 * Author : Vikas
 * Program : Body Mass Calculator
 * date: 23-05-2024
 * */

#include <stdio.h>
#include <stdlib.h>


int main(){
	int w;
	int h;
	printf("\n Please First Enter Weight(kg)  And then enter height in (meters) \n");
	scanf("%d%d",&w,&h);
	float bmi;
	bmi = w/(h*h);
	if(bmi < 18.5){
		printf("Underweight \n");
	}
	else if(bmi >= 18.5 && bmi <= 24.9){
		printf("Normalweight \n");
	}
	else if(bmi >= 25 && bmi <= 29.9){
		printf("Overweight \n");
	}
	else if(bmi >= 30){
		printf("Obesity \n");
	}
	return 0;
}


