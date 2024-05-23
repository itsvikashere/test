/*
 * Author: Vikas;
 *Program: Find the largest of three number
Date: 23-05-2024
*/
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    int b;
    int c;
    printf("Enter Three No.");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b){
        if (a > c){
            printf("\n Largest no. is %d \n",a);
        }
        else{
            printf("\n Largest no. is %d \n",c);
        }
    }
    else if (b > c){
        printf("\n Largest no. is %d \n",b);
    }
    else{
        printf("\n Largest no. is %d \n",c);
    }

    return 0;
}
