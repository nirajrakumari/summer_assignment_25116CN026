#include<stdio.h>
int main(){
    //intializing r as 0
    int n,rem,r=0;
    printf("enter the number");
    scanf("%d",&n);
    //to find the reverse we have used while loop
    while(n!=0){
    rem=n%10;
    r=r*10+rem;
    n=n/10;
    }
    //printing the reverse of the number
    printf("reverse of the no is =%d",r);
    return 0;
}
