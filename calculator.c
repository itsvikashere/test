
/* 
 * Author : Vikas
 * Program : Simple Calculator
 * date: 23-05-2024
 * */

#include <stdio.h>
#include <stdlib.h>


int main(){
	int a;
	int b;
	int p = 0;
	while(p == 0){
	 printf("Please enter choice\n");
        printf("\n 1 - for +  \n 2 - for -  \n 3 - for / \n 4 - for * \n 5 - Exit \n");

        int n;
        scanf("%d",&n);
        if(n == 5){
                printf("Exit");
		break;
        }

	printf("\n Enter a & b \n");
	scanf("%d%d",&a,&b);
	printf("Ans is: ");
	if(n == 1){
		printf("%d\n",a+b);
	}
	else if(n==2){
		printf("%d\n",a-b);
	}
	else if(n==3){
		if(b == 0){
			printf("Second value cannot be zero \n");
			continue;
		}
		printf("%d\n",a/b);
	}
	else if(n==4){
		printf("%d\n",a*b);
	}
	else{
		printf("Enter vaild option\n");
	}
	}
	return 0;
}


