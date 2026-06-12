#include<stdio.h>
int fibo(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    return fibo(n-1)+fibo(n-2);
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci Series: ");
    for(int i=0;i<terms;i++){
        printf("%d ",fibo(i));
    }
    return 0;
}