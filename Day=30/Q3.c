#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of employees:");
    scanf("%d",&n);
    int empId[n];
    float salary[n];
    char name[n][50];
    for(i=0;i<n;i++){
        printf("\nEnter Employee ID:");
        scanf("%d",&empId[i]);
        printf("Enter Employee Name:");
        scanf("%s",name[i]);
        printf("Enter Salary:");
        scanf("%f",&salary[i]);
    }
    printf("\nEmployee Records\n");
    for(i=0;i<n;i++){
        printf("\nEmployee ID:%d",empId[i]);
        printf("\nEmployee Name:%s",name[i]);
        printf("\nSalary:%.2f\n",salary[i]);
    }
    return 0;
}