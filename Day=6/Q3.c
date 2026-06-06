#include <stdio.h>

int main() {
    int number,count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number>0){
        if(number%2==1){
            count++;
        }
        number=number/2;
    }
    printf("Number of set bits = %d",count);

    return 0;
}