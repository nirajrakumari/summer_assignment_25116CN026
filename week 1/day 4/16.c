#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,m,rem;
    double power=0;
    printf("enter the lowest no of range");
    scanf("%d",&n);
     printf("enter the highest no of range");
    scanf("%d",&m);
    //to print armstrong no between range we have used for loop
    for(int i=n;i<=m;i++){
      int  n1=i;
      int m1=i;
      double power=0;
      int count=0;
      //to count no of digits
    while(n1!=0){
        count=count+1;
        n1=n1/10;
    }
    //to calculate the sum of each individual digits to the power of total digits to compare
    //whether the no is armstrong or not
    while(m1!=0){
         rem=m1%10;
       power= power+pow(rem,count);
        m1=m1/10;
    }
    //to print armstrong number
    if(power==i){
        printf("%d\n",i);
    }
}
return 0;
}