#include<stdio.h>
int main() {
    int i,n,a[20],element,loc=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Element to be search from an array=");
    scanf("%d",&element);
    for(i=0;i<n;i++) {
        if(a[i]==element){
            loc=i+1;
            break;
        }
    }
    if(loc==-1) {
        printf("element not found");
    }
    else {
        printf("element found at %dth location",loc);
    }
    return 0;
} 