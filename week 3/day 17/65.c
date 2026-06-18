// to merge arrays
#include<stdio.h>
int main(){
    int size1,size2,size3;
    // input size of first array
    printf("enter the size of  first array");
    scanf("%d",&size1);
    // input size of second array
    printf("enter the size of  second array");
    scanf("%d",&size2);
    int a[size1],b[size2];
    // input element of first array
    printf("enter the element of first array");
    for(int i=0;i<size1;i++){
        scanf("%d",&a[i]);
    }  // input element of second array
    printf("enter the element of second array");
    for(int s=0;s<size2;s++){
        scanf("%d",&b[s]);
    }
    int i=0,m=0;
    // the size of merge array will be sum of both two arrays
    size3=size1+size2;
    int merge[size3];
    // for merging
    for( m=0;m<size1;m++){
            merge[m]=a[m];          
        }
       for(m=0;m<size2;m++){
            merge[m+size1]=b[m];
        }
    // print the merge array
         for(int m=0;m<size3;m++){
            printf("%d ",merge[m]);
}
return 0;
}