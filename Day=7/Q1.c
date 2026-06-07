#include<stdio.h>

int factorial(int m){
    if(m==0)return 1;
    else{
        return (m*factorial(m-1));
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}