// to count set bits in a number
#include<stdio.h>
int main (){
    //initializing base as 1 and count as 0
    int n,rem,base=1,b=0,count=0;
    // input the number
    printf("enter the number");
    scanf("%d",&n);
    // for converting decimal to binary and counting set bits we have used while loop
    while(n!=0){
      rem=n%2;
      b=b+rem*base;
      base=base*10;
      n=n/2;
      if(rem==1){
        count=count+1;
      }
    }
    // printing the count of 1s
    printf("number of 1s in binary: %d",count);
    return 0;
}