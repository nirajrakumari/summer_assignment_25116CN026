// to find maximum and minimum element in array
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
    int min = arr[0];
    int max=arr[0];
    for(int i=1;i<size;i++){
        // to find minimum
        if(min>arr[i]){
            min=arr[i];
        }
        // to find maximum
        if(max<arr[i]){
            max=arr[i];
        }
    }
    // print the result
        printf("min =%d max= %d",min,max);
    return 0;
}

