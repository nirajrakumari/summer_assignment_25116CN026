// functions to add two numbers
#include<stdio.h>
int addtwonumber(int x,int y){
    int s;
    s=x+y;
    return s;
}
int main(){
    int a,b,sum;
    // input two number
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    // function call
    sum=addtwonumber(a,b);
    // print the result
    printf("%d",sum);
}