// sort array in descending order
#include<stdio.h>
int main(){
    int size;
    // input array size
    printf("enter array size");
    scanf("%d",&size);
    int arr[size];
    // input elements
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    // sorting
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j+1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // print the result
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}