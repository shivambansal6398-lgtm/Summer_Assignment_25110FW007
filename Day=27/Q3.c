#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float basicSalary;
    float allowance;
    float deduction;
    float netSalary;
};
int main(){
    struct Employee emp[100];
    int n=0,choice,i;
    while(1){
        printf("\nSalary Management System\n");
        printf("1.Add Employee Salary Details\n");
        printf("2.Display Salary Records\n");
        printf("3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter Employee ID:");
                scanf("%d",&emp[n].id);

                printf("Enter Employee Name:");
                scanf("%s",emp[n].name);

                printf("Enter Basic Salary:");
                scanf("%f",&emp[n].basicSalary);

                printf("Enter Allowance:");
                scanf("%f",&emp[n].allowance);

                printf("Enter Deduction:");
                scanf("%f",&emp[n].deduction);

                emp[n].netSalary=emp[n].basicSalary+
                                   emp[n].allowance-
                                   emp[n].deduction;
                n++;
                printf("Salary record added successfully.\n");
                break;
            case 2:
                if(n==0){
                    printf("No salary records found.\n");
                }else{
                    printf("\nSalary Records:\n");
                    for(i=0;i<n;i++){
                        printf("Employee ID:%d\n",emp[i].id);
                        printf("Name:%s\n",emp[i].name);
                        printf("Basic Salary:%.2f\n",emp[i].basicSalary);
                        printf("Allowance:%.2f\n",emp[i].allowance);
                        printf("Deduction:%.2f\n",emp[i].deduction);
                        printf("Net Salary:%.2f\n\n",emp[i].netSalary);
                    }
                }
                break;
            case 3:
                printf("Exiting program\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}