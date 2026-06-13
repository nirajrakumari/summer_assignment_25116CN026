// to find sum and average of array
#include<stdio.h>
int main(){
   int size;
    float average,sum=0;
    //input size of array
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    // input the elements of array
    printf("enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    // to calculate sum
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    // to calculate average
        average = sum/size;
    printf("sum of array is : %f and average is %f",sum,average);
    return 0;
}
