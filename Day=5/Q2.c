#include <stdio.h>

int main() {
    int num,ori,digit;
    int sum = 0;

    printf("Enter a number:");
    scanf("%d", &num);

    ori= num;
    while(num>0){
        digit=num%10;
        int fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if (sum==ori) {
        printf("Strong Number.\n");
    } else {
        printf("not a Strong Number.\n");
    }

    return 0;
}