// to print gcd of two numbers
#include<stdio.h>
int main (){
    int n,m,gcd;
    //input the number
    printf("enter the first number");
    scanf("%d",&n);
    printf("enter the second number");
    scanf("%d",&m);
    //for calculating gcd we have used for loop
    // gcd refers to greatest commmon divisor
    for(int i=1;i<=m;i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }
    }
    //to print gcd of two numbers
    printf("%d",gcd);
        return 0;
    }