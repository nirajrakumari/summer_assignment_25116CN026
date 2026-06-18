// to intersect array
#include<stdio.h>
int main(){
    int size1,size2, max_size,already_taken=0;
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
    int m=0,i=0,k=0,s=0;
    if(size1>size2){
    max_size=size1;
    }
    else{
         max_size=size2;
    }
    int intersect[max_size];
    for( m=0;m<size1;m++){
    already_taken=0;
    for( k=0;k<m;k++){
        if(a[m]==a[k])
        {
            already_taken=1;
        }}
        if(already_taken==1){
            continue;
        }
       for( i=0;i<size2;i++){
      if(a[m]==b[i]){
           intersect[s]=a[m];
           s++;
           break;
      }}}
      printf("Intersection elements are: ");
    for (i = 0; i < s; i++) {
        printf("%d ", intersect[i]);
    }
    return 0;
}
