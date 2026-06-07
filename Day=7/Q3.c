#include <stdio.h>

int sof(int n) {
    if(n==0)
        return 0;

    return (n%10)+sof(n/10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Sum of digits = %d",sof(num));

    return 0;
}