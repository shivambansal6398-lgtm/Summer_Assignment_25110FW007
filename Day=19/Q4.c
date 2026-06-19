#include<stdio.h>
int main() {
    int n,sum=0;

    printf("Enter the order of the square matrix:");
    scanf("%d",&n);

    int matrix[10][10];

    printf("\nEnter the matrix elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        sum+=matrix[i][i];
    }

    printf("\nSum of diagonal elements = %d",sum);

    return 0;
}