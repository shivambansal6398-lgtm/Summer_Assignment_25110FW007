#include<stdio.h>
int main(){
    int arr[100],n,choice,i;
    int sum=0,largest,smallest;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    do{
        printf("\nARRAY OPERATIONS MENU\n");
        printf("1.Display Array\n");
        printf("2.Find Sum of Elements\n");
        printf("3.Find Largest Element\n");
        printf("4.Find Smallest Element\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Array Elements:");
                for(i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;
            case 2:
                sum=0;
                for(i=0;i<n;i++){
                    sum+=arr[i];
                }
                printf("Sum of array elements=%d\n",sum);
                break;
            case 3:
                largest=arr[0];
                for(i=1;i<n;i++){
                    if(arr[i]>largest){
                        largest=arr[i];
                    }
                }
                printf("Largest element=%d\n",largest);
                break;
            case 4:
                smallest=arr[0];
                for(i=1;i<n;i++){
                    if(arr[i]<smallest){
                        smallest=arr[i];
                    }
                }
                printf("Smallest element=%d\n",smallest);
                break;
            case 5:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(choice!=5);
    return 0;
}