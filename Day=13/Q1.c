#include<stdio.h>
int main() {
    int n,a[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("print array=");
    for(int i=0;i<n;i++){
        printf("a[%d]=%d \n",i,a[i]);
    }
    return 0;
}