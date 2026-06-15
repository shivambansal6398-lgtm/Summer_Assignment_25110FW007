#include<stdio.h>
int main() {
    int n,i,arr[100],index=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            arr[index]=arr[i];
            index++;
        }
    }
    while(index<n){
        arr[index]=0;
        index++;
    }
    printf("Array after moving zeroes to the end:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}