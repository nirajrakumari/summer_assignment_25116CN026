#include<stdio.h>
int main(){
    int row,col,sum=0;
    printf("enter the row of array");
    scanf("%d",&row);
     printf("enter the column of array");
    scanf("%d",&col);
    int a[row][col];
    if(row!=col){
        printf("invalid operation");
    }
    else{
    printf("enter the element of matrix");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
         for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                sum =sum+a[i][j];
            }
        }
    }
    printf("sum of diagonal of matrix a is: %d",sum);
}
return 0;
}