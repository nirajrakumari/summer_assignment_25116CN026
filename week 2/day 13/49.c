// to input and display array
#include<stdio.h>
int main(){
    //enter the size of array
    int size;
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    // input the elements of array
    printf("enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    // print the array
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}