// to print the factorial of the given number
#include<stdio.h>
int main(){
    // initializing factor as 1
    int n,factor=1;
    //enter the number for the factorial you want to print
    printf("enter the value of n");
    scanf("%d",&n);
    //for calculating factorial here we have used for loop
    for(int i=1;i<=n;i++){
        factor=factor*i;
    }
    //for printing factorial
        printf("factorial of %d = %d",n,factor);
    return 0;
}