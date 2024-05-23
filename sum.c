
#include<stdio.h>

int main()
{
	int num1;
	int num2;
	int result;
	int div;
	int mul;
	printf("Enter two number \n");
	scanf("%d%d",&num1,&num2);
	result = num1+num2;
	div = num1/num2;
	mul = num1*num2;
	printf("Sum of the numbers is: %d \n",result);
	printf("Div of the numbers is: %d \n",div);
	printf("Multiply of the numbers is: %d \n",mul);
	return 0;
}
