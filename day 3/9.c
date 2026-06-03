#include<stdio.h>
int main (){
    //initializing count as 0
    int n,count=0;
    //input the number
    printf("enter the number");
    scanf("%d",&n);
    //for calculating no of factor we have used for loop
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count=count+1;
        }
    }
    //prime number is a number which has two factor
    //to print if no is prime or not
    if(count==2){
        printf("the number is prime");
    }
        else{
            printf("not a prime number");
        }
        return 0;
    }