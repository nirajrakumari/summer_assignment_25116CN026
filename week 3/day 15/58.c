// to rotate array left
#include<stdio.h>
int main(){
    int size,k,c=0,first;
    // input size of array
   printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    // input elements of array
    printf("enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value of rotation");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        first =arr[0];
        for(int j=0;j<size;j++){
            arr[j]=arr[j+1];
        }
        arr[size-1]=first;
    }
     for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}