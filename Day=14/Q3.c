#include<stdio.h>
int main(){
    int n,i,arr[100];
    int large,secondLarge;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    large=secondLarge=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>large){
            secondLarge=large;
            large=arr[i];
        }
        else if(arr[i]>secondLarge && arr[i]!=large){
            secondLarge=arr[i];
        }
    }
    printf("Second largest element=%d",secondLarge);
    return 0;
}