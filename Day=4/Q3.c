#include <stdio.h>

int main() {
    int n,ori,rem,sum=0;

    printf("Enter a number:");
    scanf("%d",&n);

    ori=n;

    while(n>0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    if(sum==ori)
        printf("Armstrong Number.");
    else
        printf("not an Armstrong Number.");

    return 0;
}