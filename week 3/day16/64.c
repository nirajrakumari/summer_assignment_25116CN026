// to print duplicates in array
#include<stdio.h>
int main(){
    int size,k,j,s=0;
    // input size
   printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    // input the elements of array
    printf("enter elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    // to calculate duplicates we have used for loop
    for(int i=0;i<size;i++){
       int already_print=0;
        for(int k=0;k<i;k++){
            if(arr[k]==arr[i]){
        already_print=1;
        break;
        }}
        if(already_print==0){
            arr[s]=arr[i];
            s++;
        }
    }
    size=s;
    //after removing print array
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}