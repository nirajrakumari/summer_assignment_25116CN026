// function to check perfect number
#include<stdio.h>

int perfectcheck(int x){
    int sum=0,i;
    for(i=1;i<x;i++){
        if(x%i==0){
            sum=sum+i;
        }
    }
  if(sum==x){
    printf("perfect");
   }
   else{
    printf("not a perfect no");
   }
}
int main(){
    int n;
    // input number
    printf("enter the number");
    scanf("%d",&n);
    // function call
    perfectcheck(n);
}
