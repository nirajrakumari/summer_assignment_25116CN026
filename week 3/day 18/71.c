// binary search element
#include<stdio.h>
int main(){
    int size,k,found=0;
    // input array size
    printf("enter array size");
    scanf("%d",&size);
    int arr[size];
    printf("enter sorted array");
    // input sorted array
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    // input element to search
    printf("enter the element to search");
    scanf("%d",&k);
    int mid=(size-1)/2;
if(k<=arr[mid]){
    // for finding in first half
    for(int i=0;i<=mid;i++){
        if(k==arr[i]){
            printf("element found at %d",i);
            found=1;
        }}}
        // for finding in second half
        if(k>arr[mid]){
    for(int i=mid;i<size;i++){
        if(k==arr[i]){
            printf("element found at index %d",i);
            found=1;
        }}}
        // if not found
        if(found==0){
            printf("invalid search");
        }
        return 0;
    }