// to convert binary to decimal
#include<stdio.h>
int main (){
    //initializing base as 1
    int n,rem,base=1,d=0;
    // input the binary number
    printf("enter the binarynumber");
    scanf("%d",&n);
    // to convert binary into decimal we have used while loop
    while(n!=0){
      rem=n%10;
      d=d+rem*base;
      base=base*2;
      n=n/10;
    }
    // printing the decimal num
    printf("%d",d);
    return 0;
}