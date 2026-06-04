#include<stdio.h>
int main(){
    // initializing factor as 1
    int n,factor=1;
    //enter the number for the table you want to print
    printf("enter the value of n");
    scanf("%d",&n);
    printf("table of %d is\n",n);
    //for printing table here we have used for loop
    for(int i=1;i<=10;i++){
        factor=n*i;
        printf("%d * %d\t= %d\n",n,i,factor);
    }
    return 0;
}