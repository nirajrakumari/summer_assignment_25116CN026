// write a program to calculate frequency of a element
#include<stdio.h>
int main(){
    int size,k,count=0;
    // input array size
   printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    // input elements of array
    printf("enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //input element to calculate frequency
    printf("enter the element");
    scanf("%d",&k);
    for(int i=1;i<size;i++){
        if(k==arr[i]){
            count=count+1;
        }
    }
    // print the result
        printf(" frequency of %d is %d",k,count);
    return 0;
}