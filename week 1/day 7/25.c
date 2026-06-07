// to print factorial using recursion
#include<stdio.h>
// for calculating factorial
int factorial(int x){
    if(x==0){
        return 1;
    }
    return x*factorial((x-1));

}
int main(){
    int n;
    // input the number
    printf("enter the number");
    scanf("%d",&n);
    // print the factorial
    printf("factorial of %d is: %d",n,factorial(n));

}