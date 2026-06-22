// to find column wise sum
#include<stdio.h>
int main(){
    int row1,col1,j=0,i=0;
    printf("enter the row of array");
    scanf("%d",&row1);
     printf("enter the column of array");
    scanf("%d",&col1);
    int a[row1][col1];
    // input matrix
    printf("enter the element of matrix");
    for( i=0;i<row1;i++){
        for( j=0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
         for( i=0;i<col1;i++){
            int sum=0;
        for( j=0;j<row1;j++){
            sum=sum+a[j][i];
        }
        printf("%d",sum);
    }
return 0;
}
    
