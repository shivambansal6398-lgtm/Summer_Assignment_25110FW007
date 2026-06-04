#include <stdio.h>

int main() {
    int n, i,c=0;

    printf("Enter a number: ");
    scanf("%d", &n);

        for (i = 1; i <=n; i++) {
            if (n % i == 0) {
                c=c+1;
            }
        }
        if (c == 2)
            printf("prime number.");
        else
            printf("not a prime number.");

    return 0;
}