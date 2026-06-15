// to move zeros to end
#include<stdio.h>
int main(){
    int size,k,c=0;
    // input size of array
   printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    // input elements of array
    printf("enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size-1;i++){
            for(int j=0;j<size-1;j++){
                if(arr[j]==0){
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
    }}}
     for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}