#include<stdio.h>
int main(){
    int n,i;
    char books[50][100];
    printf("Enter the number of books:");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        printf("Enter name of book %d:",i+1);
        fgets(books[i],sizeof(books[i]),stdin);
    }
    printf("\nLibrary Books\n");
    for(i=0;i<n;i++){
        printf("%d. %s",i+1,books[i]);
    }
    return 0;
}