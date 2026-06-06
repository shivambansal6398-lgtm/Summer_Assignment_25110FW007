#include <stdio.h>
int main() {
    int b=0,r,base=1,n;
    printf( "enter a decimal number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        b=b+r*base;
        n=n/2;
        base=base*10;
    }
    printf("Binary number=%d",b);
    return 0;
}