// sort using selection sort
#include<stdio.h>
int main(){
    int size;
    // input array size
    printf("enter array size");
    scanf("%d",&size);
    int arr[size];
    // input elements of array
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    // sorting
    for(int i=0;i<size-1;i++){
      int  smallest =i;
        for(int j=i;j<size-1;j++){
            if(arr[j+1]<arr[j]){
                smallest = j+1;
            }
        }
        int temp =arr[smallest];
        arr[smallest]=arr[i];
        arr[i]=temp;

    }
    // print the result
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}