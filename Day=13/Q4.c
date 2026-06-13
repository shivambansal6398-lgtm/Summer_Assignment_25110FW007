#include<stdio.h>
int main(){
    int i,n,a[10],even=0,odd=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("even numbers=%d\n odd numbers=%d",even,odd);
    return 0;
}