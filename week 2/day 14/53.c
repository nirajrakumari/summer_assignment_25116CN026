// for linear search
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
    // input the element to search
    printf("enter the element to search");
    scanf("%d",&k);
    // for searching
    for(int i=0;i<size;i++){
        if(k==arr[i]){
        printf("element %d found at %d index\n",k,i);
        c=1;
        }}
        if(c==0){
            printf("invalid search");
        }
    
    return 0;
}