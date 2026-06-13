#include<stdio.h>
int main(){
    int i,n,a[10],min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
        else if(max<a[i]){
            max=a[i];
        }
    }
    printf("minimum=%d\n maximum=%d",min,max);
    return 0;
}