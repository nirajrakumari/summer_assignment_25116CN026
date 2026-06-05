// to print the sum of first n natural numbers
#include<stdio.h>
int main(){
    // initializing sum as 0
    int n,sum=0;
    //enter the value of number up to which sum you want to calculate
    printf("enter the value of n");
    scanf("%d",&n);
    //for calculating sum here we have used for loop
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    //to print the sum of the numbers
    printf("sum of first %d no is = %d",n,sum);
    return 0;
}