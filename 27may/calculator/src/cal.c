#include<stdio.h>
#include<stdlib.h>
#include<cal_fun.h>

int main(){
	printf("Enter Two number\n");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Enter Operatorn \n");
	char op;
	scanf(" %ch \n",&op);
	switch(op){
		case '+':printf("Sum is: %d\n",sum(a,b));
			break;
		case '-': printf("Difference is: %d\n",sub(a,b));
			break;
		case '*': printf("Product is: %d\n",mul(a,b));
			break;
		default:printf("Enter Vaild operator\n");
		}
	return 0;
	}
