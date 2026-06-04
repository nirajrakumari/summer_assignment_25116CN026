#include<stdio.h>
int main(){
    //intializing product as 1
    int n,product=1,rem;
    printf("enter the number");
    scanf("%d",&n);
    //to find the remainder and multiplying  to find product we have used while loop
    while(n!=0){
    rem=n%10;
    product=product*rem;
    n=n/10;
    }
    //printing the product
    printf("product of digits is =%d",product);
    return 0;
}