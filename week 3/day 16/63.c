#include<stdio.h>
int main(){
    int size,i=0,m=0,j,sum,s;
    //input the size of array
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    // input elements of array
    printf("enter the elements of array");
    for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    // enter sum
    printf("enter the sum");
    scanf("%d",&sum);
    // to calculate pair
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            s=arr[j]+arr[i];
            if((sum==s)&&(j!=i)){
                printf("%d = %d+%d ",sum,arr[j],arr[i]);
            }
        }}
    return 0;
}