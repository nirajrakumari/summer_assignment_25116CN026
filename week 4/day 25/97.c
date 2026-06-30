// to sort in alphabetical order
#include<stdio.h>
#include<string.h>
int main(){
    int size1,size2;
    int already_taken,k=0,size;
    printf("enter the size of first array");
    scanf("%d",&size1);
     printf("enter the size of first array");
    scanf("%d",&size2);
    int size3=size1+size2;
int a[size1],b[size2],merge[size3];
 printf("enter the element of first array");
for(int i=0;i<size1;i++){
  scanf("%d",&a[i]);
}
printf("enter the element of second array");
for(int i=0;i<size2;i++){
   scanf("%d",&b[i]);
}
for(int i=0;i<size1;i++){
merge[k]=a[i];
k++;
}
for(int i=0;i<size2;i++){
    merge[k]=b[i];
    k++;
}
for(int i=0;i<size3;i++){
    for(int j=0;j<size3-1-i;j++){
       if(merge[j]>merge[j+1]){
        int temp=merge[j+1];
         merge[j+1]=merge[j];
         merge[j]=temp;
       }
    }
}
for(int i=0;i<size3;i++){
    printf("%d",merge[i]);
}
      return 0;
    }