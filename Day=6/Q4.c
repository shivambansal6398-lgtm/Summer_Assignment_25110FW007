#include <stdio.h>

int main() {
    int x,n,result=1;

    printf("Enter the value of x: ");
    scanf("%d",&x);

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        result=result*x;
    }

    printf("%d raised to the power %d = %d",x,n,result);

    return 0;
}