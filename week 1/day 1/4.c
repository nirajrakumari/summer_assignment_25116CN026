// to print the no of digits in the number
#include<stdio.h>
int main(){
    // initializing count as 0
    int n,rem,count=0;
    //enter the number 
    printf("enter the value of n");
    scanf("%d",&n);
    //for calculating no of digits we have used while loop
    while(n!=0){
    rem=n%10;
   count=count+1;
   n=n/10; 
    }
    printf("the no of digits is %d",count);
    return 0;
}