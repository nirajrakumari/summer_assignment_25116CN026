// to find row wise sum
#include<stdio.h>
int main(){
    int row1,col1,j,i;
    printf("enter the row of array");
    scanf("%d",&row1);
     printf("enter the column of array");
    scanf("%d",&col1);
    int a[row1][col1];
    // input matrix
    printf("enter the element of matrix");
    for(i=0;i<row1;i++){
        for( j=0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // calculate sum
         for( i=0;i<row1;i++){
               int sum=0;
        for( j=0;j<col1;j++){
            sum=sum+a[i][j];
        }
        printf("%d",sum);
    }
return 0;
}