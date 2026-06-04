#include<stdio.h>
int main(){
    //intializing a as 0 and b as 1
    int n,a=0,b=1;
    //input the no of terms
    printf("enter the no of terms");
    scanf("%d",&n);
    // to calculate fibonacci series
    // when no of terms is 1
    if(n==1){
        printf("%d\n",a);
    }
    //when no of terms is 2
    if(n==2){
         printf("%d\n",a);
        printf("%d\n",b);
    }
    //when no of terms is greater then 2
    if(n>2){
        printf("%d\n",a);
        printf("%d\n",b);
        for(int i=3;i<=n;i++){
           int c=a+b;
           a=b;
           b=c;
           //printing fibonacci terms
           printf("%d\n",c);
        }
    }
return 0;
}