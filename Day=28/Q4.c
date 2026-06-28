#include<stdio.h>
#include<string.h>
struct Contact{
    char name[50];
    char phone[15];
};
int main(){
    struct Contact contacts[100];
    int count=0;
    int choice,i;
    char searchName[50];
    do{
        printf("\nContact Management System\n");
        printf("1.Add Contact\n");
        printf("2.Display Contacts\n");
        printf("3.Search Contact\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Enter Name:");
            scanf(" %[^\n]",contacts[count].name);
            printf("Enter Phone Number:");
            scanf("%s",contacts[count].phone);
            count++;
            printf("Contact Added Successfully!\n");
            break;
        case 2:
            if(count==0){
                printf("No contacts found.\n");
            }else{
                printf("\nContact List:\n");
                for(i=0;i<count;i++){
                    printf("Name: %s\n",contacts[i].name);
                    printf("Phone: %s\n",contacts[i].phone);
                    printf("\n");
                }
            }
            break;
        case 3:
            printf("Enter Name to Search:");
            scanf(" %[^\n]",searchName);
            for(i=0;i<count;i++){
                if(strcmp(contacts[i].name,searchName)==0){
                    printf("\nContact Found!\n");
                    printf("Name:%s\n",contacts[i].name);
                    printf("Phone:%s\n",contacts[i].phone);
                    break;
                }
            }
            if(i==count){
                printf("Contact Not Found!\n");
            }
            break;
        case 4:
            printf("Exiting Program\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }
    }while(choice!=4);
    return 0;
}