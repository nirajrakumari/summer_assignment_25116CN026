// to calculate lcm of  two numbers
#include<stdio.h>
int gcd(int n,int m){
    // to calculate gcd
    int gcd;
    for(int i=1;i<=m;i++){
        if(n%i==0 && m%i==0){
         gcd=i;
        }
    }
return gcd;
}
int main (){
    int n,m,lcm=1;
    //input the number
    printf("enter the first number");
    scanf("%d",&n);
    printf("enter the second number");
    scanf("%d",&m);
    //for calculating lcm we have used for loop
    for(int i=1;i<m||i<n;i++){
        if(n%i==0||m%i==0){
            // to calculate lcm we will call function of gcd
            lcm=(n*m)/gcd(n,m);
        }
    }
    //to print lcm of two numbers
    printf("%d",lcm);
        return 0;
    }