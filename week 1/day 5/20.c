//to find largest prime factor of a number
#include<stdio.h>
int main(){
    //intilaizing c as 0
    int n,c=0,prime;
    //input the number
    printf("enter the number");
    scanf("%d",&n);
    //for finding largest prime factor we have used for loop
    for(int i=1;i<=n;i++){
      int count =0;
        if(n%i==0){
            c=i;
        } 
 //to find whether the factor is prime or not by calculating its no of factors
 //if the no of factors is equal to 2 then the factor of the given number is prime
    for(int s=1;s<=c;s++){
        if(c%s==0){
        count =count+1;
        }
    }
    //updating prime if the number is prime
    if(count==2){
        prime=c;
    }}
    //printing the largest prime factor
    printf("%d\n",prime);
    return 0;
}