#include <stdio.h>

int main() {
    int n,a=0,b=1,c,i;

    printf("Enter the value of n:");
    scanf("%d",&n);

    if(n==1)
        printf("nth Fibonacci term = %d",a);
    else if(n==2)
        printf("nth Fibonacci term = %d",b);
    else{
        for(i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }

        printf("nth Fibonacci term = %d",c);
    }

    return 0;
}