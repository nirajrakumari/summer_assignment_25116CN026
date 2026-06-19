// to transpose matrix
#include<stdio.h>
int main(){
    int row1,col1,i,j,c[25][30];
    // input row and col of matrix
    printf("enter the row of array");
    scanf("%d",&row1);
     printf("enter the column of array");
    scanf("%d",&col1);
    int a[row1][col1];
    // enter element
    printf("enter the element of matrix\n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
         for(int i=0;i<col1;i++){
        for(int j=0;j<row1;j++){
            c[i][j]=a[j][i];
        }
    }
    // print the transpose
    printf("transpose of matrix a is\n");
     for(int i=0;i<col1;i++){
        for(int j=0;j<row1;j++){
        printf("%d ",c[i][j]);
        }
        printf("\n");
    }
return 0;
}