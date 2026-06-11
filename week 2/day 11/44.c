// function to calculate factorial
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int a,f;
    // input the number
    printf("enter the number");
    scanf("%d",&a);
    //function call
    f=factorial(a);
    //print the result
    printf("factorial is : %d",f);
}