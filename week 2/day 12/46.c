// function to check armstrong number
#include<stdio.h>
#include<math.h>
void armstrongcheck(int x){
    float power;
  int m=x;
  int y=x;
    int c=0,rem;
   while(x!=0){
    x=x/10;
    c++;
   }
   while(m!=0){
    rem=m%10;
    power=power+pow(rem,c);
    m=m/10;
   }
   if(power==y){
    printf("armstrong number");
   }
   else{
    printf("not armstrong");
}}
int main(){
    int n;
    // input the number
    printf("enter the number");
    scanf("%d",&n);
    // function call
    armstrongcheck(n);
}