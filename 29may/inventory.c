/*
Author: Vikas
Program:Define a structure to hold product inventory information, including the product ID and quantity. Write a program that accepts multiple product records (product_ID and quantity) and prints the total quantity for each product in decreasing order of total quantity. In case there are multiple records for the same product, the program should sum up the quantities.
Date: 29-05-2024
*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char prod_id[100];
    int qty;
}Inventory;

int main() {
    // Write C code here
    printf("No. of entry to insert: \n");
    int n;
    scanf("%d",&n);
    Inventory p[n];
    printf("Enter the Product id and quantity with -\n");
    int l = 0;
    for(int i =0;i < n;i++){
        char temp[100];
        int t;
        int a = 0;
        char line[100];
        char *token = (char *) malloc(1024); //void
        // scanf("%s %d",temp,&t);
        scanf("%s[^\n]",line);
        token = strtok(line,"-");
        strcpy(temp,token);
        token = strtok(NULL,"-");
        t = atoi(token);
        for(int j = 0; j<l;j++){
            if(strcmp(p[j].prod_id,temp) == 0){
                p[j].qty += t;
                a = 1;
            }
        }
        if(a == 0){
            strcpy(p[l].prod_id,temp);
            p[l].qty = t;
            l++;
        }
        
    }
    n = l;
    
    for(int i = 0; i < n-1;i++){
        for(int j = 0; j < n-i-1; j++){
            if(p[j].qty < p[j+1].qty){
                char temp[100];
                int t ;
                t= p[j].qty;
                strcpy(temp,p[j].prod_id);
                
                strcpy(p[j].prod_id,p[j+1].prod_id);
                p[j].qty = p[j+1].qty;
                
                strcpy(p[j+1].prod_id,temp);
                p[j+1].qty = t;
            }
        }
    }
    
    for(int i = 0; i < n;i++){
        printf("Prod_ID is %s and Quantity is %d\n",p[i].prod_id,p[i].qty);
    }
    
    return 0;
}
        
