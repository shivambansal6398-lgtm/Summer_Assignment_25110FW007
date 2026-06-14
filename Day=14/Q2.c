#include<stdio.h>
int main(){
    int n,i,arr[100],ele,count=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to find frequency: ");
    scanf("%d",&ele);

    for(i=0;i<n;i++){
        if(arr[i]==ele){
            count++;
        }
    }
    printf("Frequency of %d=%d",ele,count);
    return 0;
}