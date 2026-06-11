// function to check prime number
#include<stdio.h>
int checkprime(int x){
    int c=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            c=c+1;
        }
    }
    if(c==2){
        printf("prime number");
    }
    else{
        printf("not prime");
    }
}
int main(){
    int a,prime;
    // input the number
    printf("enter the number");
    scanf("%d",&a);
    // function call
    prime=checkprime(a);
}