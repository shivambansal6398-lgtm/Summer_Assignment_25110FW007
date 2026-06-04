#include <stdio.h>

int main() {
    int start,end,num1,num2,rem,sum;

    printf("Enter starting number:");
    scanf("%d",&start);

    printf("Enter ending number:");
    scanf("%d",&end);

    printf("Armstrong numbers are:\n");

    for(num1=start;num1<=end;num1++){
        num2=num1;
        sum=0;

        while(num2>0){
            rem=num2%10;
            sum=sum+(rem*rem*rem);
            num2=num2/10;
        }
        if(sum==num1){
            printf("%d ",num1);
        }
    }

    return 0;
}