// function to check no is palindrome or not
#include<stdio.h>
void palindromecheck(int x){
  int m=x;
    int r=0,rem;
   while(x!=0){
    rem=x%10;
    r=r*10+rem;
    x=x/10;
   }
   if(r==m){
    printf(" is palindrome");
   }
   else{
    printf("not a palindrome");
   }
}
int main(){
    int n;
    // input number
    printf("enter the number");
    scanf("%d",&n);
    // function call
    palindromecheck(n);
}