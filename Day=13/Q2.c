#include<stdio.h>
int main(){
    int i,n,a[10],sum=0,avg;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    printf("\n");

    avg=sum/n;

    printf("sum of all element=%d",sum);
    printf("avg=%d",avg);
    return 0;
}