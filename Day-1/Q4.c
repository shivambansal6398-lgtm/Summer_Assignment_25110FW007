#include<stdio.h>
int main(){
    int n,rem,count=0;
    printf("Enter the number:");
    scanf("%d",&n);

    if(n==0){
        count=1;
    }else{
        if(n<0){
            n=-n;
        }
    while(n>0){
        n=n/10;
        count++;
    }}
    printf("Total number of digits:%d",count);
    return 0;
}