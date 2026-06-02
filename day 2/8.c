#include<stdio.h>
int main(){
    //intializing r as 0
    int n,rem,r=0,n1;
    printf("enter the number");
    scanf("%d",&n);
    n1=n;
    //to find the reverse we have used while loop
    while(n!=0){
    rem=n%10;
    r=r*10+rem;
    n=n/10;
    }
    //palindrome refers to the the number which remains same after reversing
    //to check if no is palindrome or not
    if(n1==r){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }
    return 0;
}