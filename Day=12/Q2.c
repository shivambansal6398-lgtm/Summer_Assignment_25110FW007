#include<stdio.h>
int arm(int n){
    int ori=n,sum=0,digit;
    while(n>0){
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }

    return ori==sum;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (arm(num))
        printf("Armstrong number.");
    else
        printf("not an Armstrong number.");
    return 0;
}