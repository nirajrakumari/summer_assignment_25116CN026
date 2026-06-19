  #include<stdio.h>
  int main(){
    int row1,col1,row2,col2;
     printf("enter the row and column of matrix a");
    scanf("%d%d",&row1,&col1);
  printf("enter the row and column of matrix b");
    scanf("%d%d",&row2,&col2);
    int a[row1][col1],b[row2][col2];
    if((row1!=row2)&&(col1!=col2)){
        printf("invalid operation");
    }
    else{
        //input element of matrix a
    printf("enter the element of matrix a");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // input element of matrix b
      printf("enter the element of matrix b");
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[row1][col1];
    // to subtract both
         for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
          c[i][j]=a[i][j]-b[i][j];
        }}
        for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
          printf("%d ",c[i][j]);
        }
      printf("\n");
    }
      }
      return 0;
    }
   