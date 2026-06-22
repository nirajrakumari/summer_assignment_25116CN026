// to print if matrix is symmetric
#include<stdio.h>
int main(){
    int row1,col1,i,j,s=0;
    printf("enter the row of array");
    scanf("%d",&row1);
     printf("enter the column of array");
    scanf("%d",&col1);
    int a[row1][col1];
    int c[row1][col1];
    printf("enter the element of first matrix");
    // to show symmetric it must be square matrix
    if(row1!=col1){
        printf("invalid matrix");
    }
    else{
        // input matrix
    for( i=0;i<row1;i++){
        for( j=0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // transpose the matrix
         for( i=0;i<row1;i++){
        for( j=0;j<col1;j++){
            c[i][j]=a[j][i];
        }
    }// to check if symmetric
     for(i=0;i<col1;i++){
        for(j=0;j<col1;j++){
        if(c[i][j]==a[i][j]){
            s++;
        }
        }
    }
    if(s==row1*col1){
        printf("symmetric matrix");
    }
    else{
        printf("not symmetric");
    }
}
return 0;
}