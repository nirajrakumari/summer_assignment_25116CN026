#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,rem,r;
    double power=0;
    printf("enter the number");
    scanf("%d",&n);
    int n1=n;
    int m1=n;
    //to calculate no of digits
    while(n!=0){
        rem=n%10;
        count=count+1;
        n=n/10;
    }
    while(n1!=0){
         r=n1%10;
       power= power+pow(r,count);
        n1=n1/10;
        // armstrong no is a no that is equal to sum of power of its digits
       // and power is equal to no of total digit
    }
    //to print whether the no is armstrong or not
   if(power==m1){
       printf("armstrong no");
    }
    else{
       printf("not a armstrong");
    }
return 0;
}