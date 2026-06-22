  #include<stdio.h>
  int main(){
    int row1,col1,row2,col2,i,j,k;
     printf("enter the row and column of matrix a");
    scanf("%d%d",&row1,&col1);
  printf("enter the row and column of matrix b");
    scanf("%d%d",&row2,&col2);
    int a[row1][col1],b[row2][col2],c[row1][col2];
    if(col1!=row2){
        printf("invalid operation");
    }
    else{
        //input element of matrix a
    printf("enter the element of matrix a");
    for( i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // input element of matrix b
      printf("enter the element of matrix b");
    for( i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    // to multiply both
         for( i=0;i<row1;i++){
        for(j=0;j<col2;j++){
           c[i][j]=0;
            for(k=0;k<col1;k++){
          c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }}}
        for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
          printf("%d ",c[i][j]);
        }
      printf("\n");
    }
      }
      return 0;
    }
   