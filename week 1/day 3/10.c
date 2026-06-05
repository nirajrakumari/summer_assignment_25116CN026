// to print all prime numbers in the given range
#include<stdio.h>
//function to calculate prime number
int prime(int x){  
    int count=0,i;
for(int s=1;s<=x;s++){
        if(x%s==0){
        count=count+1;
        }}
        if(count==2){
            printf(" %d ",x);
        }
    }

int main (){
    //initializing count as 0
    int n, m,i;
    //input the range
    printf("enter the lower number of range");
    scanf("%d",&n);
    printf("enter the highest number of the range");
    scanf("%d",&m);
    for(int i=n;i<=m;i++){
        //to print prime number in the given range we will call function
      prime(i);
    }
            return 0;
    }