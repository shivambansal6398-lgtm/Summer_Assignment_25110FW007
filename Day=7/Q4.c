#include <stdio.h>

int reverse=0;

void revNumber(int n) {
    if (n == 0)
        return;

    reverse=reverse*10+(n%10);
    revNumber(n/10);
}

int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    revNumber(num);
    printf("Reversed number=%d",reverse);

    return 0;
}