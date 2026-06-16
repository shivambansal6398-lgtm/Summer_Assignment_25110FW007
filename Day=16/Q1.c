#include<stdio.h>
int main(){
    int arr[]={1,2,4,5};
    int n=5;
    int expSum=n*(n+1)/2;
    int actSum=0;

    for(int i=0;i<n-1;i++){
        actSum+=arr[i];
    }
    int missingNumber=expSum-actSum;
    printf("Missing Number=%d\n",missingNumber);
    return 0;
}