// to check whether the given number is perfect
#include<stdio.h>
int main(){
    //initializing c as 0
    int n,c=0;
    //input the number
    printf("enter the number");
    scanf("%d",&n);
    //to find the sum of factor we have used for loop
    for(int i=1;i<n;i++){
        if(n%i==0){
            c=c+i;
        }
    }
    //perfect number is a no which is equal to sum of its factor excluding no itself
    //to print whether the no is perfect or not
    if(c==n){
        printf("perfect number");
    }
    else{
        printf("not perfect number");
    }
    return 0;
}