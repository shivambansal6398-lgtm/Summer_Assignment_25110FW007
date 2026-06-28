#include<stdio.h>
struct BankAccount{
    int accountNumber;
    char name[50];
    float balance;
};
int main(){
    struct BankAccount account;
    int choice;
    float amount;

    printf("Enter Account Number:");
    scanf("%d",&account.accountNumber);

    printf("Enter Account Holder Name:");
    scanf(" %[^\n]",account.name);
    printf("Enter Initial Balance:");
    scanf("%f",&account.balance);
    do{
        printf("\nBank Account System\n");
        printf("1.Deposit Money\n");
        printf("2.Withdraw Money\n");
        printf("3.Check Balance\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Enter amount to deposit:");
            scanf("%f",&amount);
            account.balance+=amount;
            printf("Amount Deposited Successfully!\n");
            break;
        case 2:
            printf("Enter amount to withdraw:");
            scanf("%f",&amount);
            if(amount<=account.balance){
                account.balance-=amount;
                printf("Amount Withdrawn Successfully!\n");
            }else{
                printf("Insufficient Balance!\n");
            }
            break;
        case 3:
            printf("\nAccount Number:%d\n",account.accountNumber);
            printf("Account Holder:%s\n",account.name);
            printf("Current Balance:%.2f\n",account.balance);
            break;
        case 4:
            printf("Thank You for Using the Bank System!\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }
    }while(choice!=4);
    return 0;
}