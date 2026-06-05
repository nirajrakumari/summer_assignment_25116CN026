// to check whether the number is strong or not
#include<stdio.h>
int main(){
    //intializing sum as 0
    int n,rem,sum=0;
    // input the number
    printf("enter the number");
    scanf("%d",&n);
   int n1=n;
    // to find the digits of the number we have used while loop
    while(n!=0){
        //intializing f as 1
        int f=1;
        rem = n%10;
        n=n/10;
    // to find factorial of the digits we have again used while loop within the while loop
        while(rem!=0){
            f=f*rem;
            rem--;
        }
    // to calculate sum of factorial of digits of the number 
        sum=sum+f;
    }
  // strong number is number which is equal to sum of factorial of digits of the number
if(sum==n1){
    printf("the number is strong number");
}
else{
    printf("not a strong number");
}
    return 0;
}