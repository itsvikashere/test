/*
Author: Vikas
Program:Define a structure to hold student information, including the student ID and a list of scores. Write a program that accepts multiple student records (student_ID and score) and prints the student ID and their highest average score. In case there are multiple records for the same student, the program should calculate the average of their scores. The program should print the student ID with the highest average score.
Date: 29-05-2024
*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char stu_id[100];
    float mark;
    int count;
}Student;

int main() {
    // Write C code here
    printf("No. of entry to insert: \n");
    int n;
    scanf("%d",&n);
    Student s[n];
    printf("Enter the Student id and Marks with -\n");
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
        t = atof(token);
        for(int j = 0; j<l;j++){
            if(strcmp(s[j].stu_id,temp) == 0){
                s[j].mark += t;
                s[j].count += 1;
                a = 1;
            }
        }
        if(a == 0){
            strcpy(s[l].stu_id,temp);
            s[l].mark = t;
            s[l].count = 1;
            l++;
        }
        
    }
    n = l;
    for(int i = 0; i < n;i++){
        float avg = s[i].mark/s[i].count;
        printf("STD_ID is %s and Avg is %.2f\n",s[i].stu_id,avg);
    }
    
    return 0;
}
        
