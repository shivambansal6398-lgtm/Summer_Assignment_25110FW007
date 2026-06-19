#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    printf("Enter number of columns");
    scanf("%d",&cols);
    int matrix1[10][10],matrix2[10][10],result[10][10];

    printf("\nEnter elements of first matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }

    printf("\nResultant matrix after subtraction:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}