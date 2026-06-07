// to find sum of digits using recursion
#include<stdio.h>
// to calculate sum of digits
int sumofdigits(int x){
   int rem;
    rem=x%10;
    if(x==0){
        return 0;
    }
    return rem+sumofdigits(x/10);

}
int main(){
    int n;
    // input the number
    printf("enter the number");
    scanf("%d",&n);
    // print the sum
    printf("sum of digits of %d is: %d",n,sumofdigits(n));

}