#include<stdio.h>
int main(){
    char name[50];
    int rollNo;
    float s1, s2, s3, s4, s5;
    float total, percentage;
    char grade;
    printf("Enter Student Name:");
    scanf("%s",name);
    printf("Enter Roll Number:");
    scanf("%d",&rollNo);
    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    percentage=total/5;
    if(percentage>=90)
        grade='A';
    else if(percentage>=75)
        grade='B';
    else if(percentage>=60)
        grade='C';
    else if(percentage>=40)
        grade='D';
    else
        grade='F';
    printf("\nMARKSHEET\n");
    printf("Name       :%s\n",name);
    printf("Roll No    :%d\n",rollNo);
    printf("Total Marks:%.2f\n",total);
    printf("Percentage :%.2f%%\n",percentage);
    printf("Grade      :%c\n",grade);
    return 0;
}