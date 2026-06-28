#include<stdio.h>
#include<string.h>
struct Book{
    int id;
    char title[50];
    char author[50];
    int issued;
};

int main(){
    struct Book books[100];
    int count=0;
    int choice,id,i;
    do{
        printf("\nLibrary Management System\n");
        printf("1.Add Book\n");
        printf("2.Display Books\n");
        printf("3.Issue Book\n");
        printf("4.Return Book\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Enter Book ID:");
            scanf("%d",&books[count].id);

            printf("Enter Book Title:");
            scanf(" %[^\n]",books[count].title);

            printf("Enter Author Name:");
            scanf(" %[^\n]",books[count].author);

            books[count].issued=0;
            count++;

            printf("Book Added Successfully!\n");
            break;

        case 2:
            if(count==0) {
                printf("No books available.\n");
            }else{
                printf("\nLibrary Books:\n");
                for(i=0;i<count;i++){
                    printf("ID:%d\n",books[i].id);
                    printf("Title:%s\n",books[i].title);
                    printf("Author:%s\n",books[i].author);
                    if(books[i].issued)
                        printf("Status: Issued\n");
                    else
                        printf("Status: Available\n");

                    printf("\n");
                }
            }
            break;
        case 3:
            printf("Enter Book ID to issue:");
            scanf("%d",&id);
            for(i=0;i<count;i++){
                if(books[i].id==id){
                    if(books[i].issued==0){
                        books[i].issued=1;
                        printf("Book Issued Successfully!\n");
                    }else{
                        printf("Book is already issued.\n");
                    }
                    break;
                }
            }
            if(i==count)
                printf("Book not found.\n");
            break;
        case 4:
            printf("Enter Book ID to return:");
            scanf("%d",&id);
            for(i=0;i<count;i++){
                if(books[i].id==id){
                    if(books[i].issued==1){
                        books[i].issued=0;
                        printf("Book Returned Successfully!\n");
                    }else{
                        printf("Book was not issued.\n");
                    }
                    break;
                }
            }
            if(i==count)
                printf("Book not found.\n");

            break;
        case 5:
            printf("Exiting Program\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }
    }while(choice!=5);
    return 0;
}