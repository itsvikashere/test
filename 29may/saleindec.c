/*
Author: Vikas
Program:Define a structure to hold the product sales information, structure will contain the product_ID and total_sales_amount. Write a program that accepts multiple product records (product_ID and total_sales_amount) and prints them in decreasing order of total_sales_amount. In case there are multiple records pertaining to the same product_id, the program should choose a single record containing the highest total_sales_amount.
Date: 29-05-2024
*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char prod_id[100];
    int total_sale;
}Product;

int main() {
    // Write C code here
    printf("Sales count: \n");
    int n;
    scanf("%d",&n);
    Product p[n];
    printf("Enter the product id and total sale with -\n");
    int l = 0;
    for(int i =0;i < n;i++){
        char temp[100];
        int t;
        int a = 0;
        char line[100];
        char *token = (char *) malloc(1024); //void
        // scanf("%s %d",temp,&t);
        scanf(" %s[^\n]",line);
        token = strtok(line,"-");
        strcpy(temp,token);
        token = strtok(NULL," ");
        t = atoi(token);
        for(int j = 0; j<l;j++){
            if(strcmp(p[j].prod_id,temp) == 0){
                if(p[j].total_sale < t){
                    p[j].total_sale = t;
                    a = 1;
                }
                else{
                    a = 1;
                }
            }
        }
        if(a == 0){
            strcpy(p[l].prod_id,temp);
            p[l].total_sale = t;
            l++;
        }
    }

    n = l;
    for(int i = 0; i < n-1;i++){
        for(int j = 0; j < n-i-1; j++){
            if(p[j].total_sale < p[j+1].total_sale){
                char temp[100];
                int t ;
                t= p[j].total_sale;
                strcpy(temp,p[j].prod_id);
                
                strcpy(p[j].prod_id,p[j+1].prod_id);
                p[j].total_sale = p[j+1].total_sale;
                
                strcpy(p[j+1].prod_id,temp);
                p[j+1].total_sale = t;
            }
        }
    }
    for(int i = 0; i < n;i++){
    printf("Pid: %s Sales: %d\n",p[i].prod_id,p[i].total_sale);
   
    }

    return 0;
}
