#include<stdio.h>
struct Item{
    int id;
    char name[50];
    int quantity;
    float price;
};
int main(){
    struct Item items[100];
    int n=0,choice,i;
    do{
        printf("\nINVENTORY MANAGEMENT SYSTEM\n");
        printf("1.Add Item\n");
        printf("2.Display Inventory\n");
        printf("3.Search Item\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter Item ID:");
                scanf("%d",&items[n].id);
                printf("Enter Item Name:");
                scanf("%s",items[n].name);
                printf("Enter Quantity:");
                scanf("%d",&items[n].quantity);
                printf("Enter Price:");
                scanf("%f",&items[n].price);
                n++;
                printf("Item added successfully!\n");
                break;
            case 2:
                if(n==0){
                    printf("Inventory is empty.\n");
                }else{
                    printf("\nID\tName\tQuantity\tPrice\n");
                    for(i=0;i<n;i++){
                        printf("%d\t%s\t%d\t\t%.2f\n",
                               items[i].id,
                               items[i].name,
                               items[i].quantity,
                               items[i].price);
                    }
                }
                break;
            case 3:{
                int searchId,found=0;
                printf("Enter Item ID to search:");
                scanf("%d",&searchId);
                for(i=0;i<n;i++){
                    if(items[i].id==searchId){
                        printf("\nItem Found:\n");
                        printf("ID:%d\n",items[i].id);
                        printf("Name:%s\n",items[i].name);
                        printf("Quantity:%d\n",items[i].quantity);
                        printf("Price:%.2f\n",items[i].price);
                        found=1;
                        break;
                    }
                }
                if(!found){
                    printf("Item not found.\n");
                }
                break;
            }
            case 4:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(choice!=4);
    return 0;
}