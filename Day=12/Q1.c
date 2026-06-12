#include<stdio.h>
int Palin(int n){
    int ori=n,reverse=0;
    while(n>0){
        reverse=reverse*10+(n%10);
        n=n/10;
    }
    return ori==reverse;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (Palin(num))
        printf("palindrome number.");
    else
        printf("not a palindrome number.");
    return 0;
}