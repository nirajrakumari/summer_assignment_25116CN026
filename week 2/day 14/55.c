// to calculate second largest element in array
#include<stdio.h>
int main(){
    int size;
    // input size of array
   printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    // input elements of array
    printf("enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    // to calculate maximum element
    for(int i=1;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    // to calculate second largest element
    int smax=0;
    for(int i=0;i<size;i++){
        if(smax<arr[i]&&arr[i]<max){
          smax=arr[i];
        }
    }
    // print the result
        printf(" second largest element is %d",smax);
    return 0;
}