// function to print fibonacci
#include<stdio.h>
void fibonacci(int x){
    int a=0,b=1,c;
    if(x==1){
    printf("%d",a);
    }
    if(x==2){
        printf("%d",a);
        printf("%d",b);       
    }
    if(x>2){
        printf("%d",a);
        printf("%d",b);
      for(int i=3;i<=x;i++){
        c=a+b; 
        a=b;
        b=c;
        printf("%d",c);
    }}}
int main(){
    int n;
    // input the number of terms
    printf("enter the value of n");
    scanf("%d",&n);
// function call
    fibonacci(n);
}