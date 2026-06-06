// to print power x^n without using power function
#include<stdio.h>
int main (){
    //initializing s as 1
    int n,p,s=1;
    // input the number
    printf("enter the number");
    scanf("%d",&n);
    //input the power
    printf("enter the power");
    scanf("%d",&p);
    // to calculate n^p we have used for loop
    for(int i=1;i<=p;i++){
      s=n*s;
    }
    // printing the result
    printf("%d",s);
    return 0;
}