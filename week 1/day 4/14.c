#include<stdio.h>
int main(){
    //initializing a as 0 and b as 1
    int n,a=0,b=1;
    // input n
    printf("enter the value of n");
    scanf("%d",&n);
    //when n is 1
    if(n==1){
        printf("%d\n",a);
    }
    //when n is 2
    if(n==2){
        printf("%d\n",b);
    }
    //when n is greater than 2
    if(n>2){

        for(int i=3;i<=n;i++){
           int c=a+b;
           a=b;
           b=c;
        }
        //to print nth term
           printf("%d\n",b);
        
    }
    return 0;

}