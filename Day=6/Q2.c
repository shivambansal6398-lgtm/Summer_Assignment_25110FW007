#include<stdio.h>
int main(){
    int d=0,r,base=1,n;
    printf("enter a binary no.:");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        d=d+r*base;
        n=n/10;
        base=base*2;
    }
    printf("decimal no.=%d",d);
    return 0;
}