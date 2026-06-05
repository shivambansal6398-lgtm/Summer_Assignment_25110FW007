#include <stdio.h>

int main() {
    int num;
    int largefac=0;

    printf("Enter a number:");
    scanf("%d",&num);

    while(num%2==0){
        largefac=2;
        num=num/2;
    }

    for(int i=3;i*i<=num;i+=2){
        while(num%i==0){
            largefac=i;
            num=num/i;
        }
    }
    if(num>2){
        largefac=num;
    }
    printf("Largest prime factor=%d\n",largefac);

    return 0;
}