/* 
 * Author : Vikas
 * Program : Area and Circumference
 * date: 23-05-2024
 * */

#include <stdio.h>
#include <stdlib.h>


int main(){
	int r;
	printf("\n Please Enter Radius\n");
	scanf("%d",&r);
	float a;
	float c;
	a = 3.14*r*r;
	c = 2*3.14*r;
	printf("Area of a Circle is: %f \n",a);
	printf("Circumference of a Circle is: %f \n",c);
	return 0;
}
