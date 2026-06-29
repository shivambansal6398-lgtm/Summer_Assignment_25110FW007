#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int choice;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    do{
        printf("\nSTRING OPERATIONS MENU\n");
        printf("1.Find Length of String\n");
        printf("2.Convert to Uppercase\n");
        printf("3.Convert to Lowercase\n");
        printf("4.Reverse the String\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Length of the string=%lu\n",strlen(str)-1);
                break;
            case 2:
                for(int i=0;str[i]!='\0';i++){
                    if(str[i]>='a' && str[i]<='z')
                        str[i]=str[i]-32;
                }
                printf("Uppercase String:%s",str);
                break;
            case 3:
                for(int i=0;str[i]!='\0';i++){
                    if(str[i]>='A' && str[i]<='Z')
                        str[i]=str[i]+32;
                }
                printf("Lowercase String:%s",str);
                break;
            case 4:{
                char rev[100];
                int len=strlen(str)-1;
                for(int i=0;i<len;i++){
                    rev[i]=str[len-i-1];
                }
                rev[len]='\0';
                printf("Reversed String:%s\n",rev);
                break;
            }
            case 5:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(choice!=5);
    return 0;
}