#include<stdio.h>
int perfect(int n) {
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
            sum+=i;
    }
    return sum==n;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(perfect(num))
        printf("perfect number.");
    else
        printf("not a perfect number.");
    return 0;
}