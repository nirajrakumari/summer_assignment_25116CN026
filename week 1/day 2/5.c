#include<stdio.h>
int main(){
    //intializing sum as 0
    int n,sum=0,rem;
    printf("enter the number");
    scanf("%d",&n);
    //to find the remainder and adding to find sum we have used while loop
    while(n!=0){
    rem=n%10;
    sum=sum+rem;
    n=n/10;
    }
    //printing the sum
    printf("sum of digits is =%d",sum);
    return 0;
}