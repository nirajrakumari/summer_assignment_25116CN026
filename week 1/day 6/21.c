// to convert decimal to binary
#include<stdio.h>
int main (){
    //initializing base as 1
    int n,rem,base=1,b=0;
    // input the number
    printf("enter the number");
    scanf("%d",&n);
    // to convert decimal into binary we have used while loop
    while(n!=0){
      rem=n%2;
      b=b+rem*base;
      base=base*10;
      n=n/2;
    }
    // printing the binary num
    printf("%d",b);
    return 0;
}