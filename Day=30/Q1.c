#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of students:");
    scanf("%d",&n);
    char name[n][50];
    int marks[n];

    for(i=0;i<n;i++){
        printf("\nEnter name of student %d:",i+1);
        scanf("%s",name[i]);
        printf("Enter marks:");
        scanf("%d",&marks[i]);
    }

    printf("\nStudent Records\n");
    for(i=0;i<n;i++){
        printf("Name:%s\tMarks:%d\n",name[i],marks[i]);
    }
    return 0;
}