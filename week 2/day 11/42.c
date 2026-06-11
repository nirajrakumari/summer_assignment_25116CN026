//  function to print max of two numbers
#include<stdio.h>
int maxoftwonumber(int x,int y){
    int maximum;
    maximum=(x>y)?x:y;
    return maximum;
}
int main(){
    int a,b,max;
    // input two numbers
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    // function call
    max=maxoftwonumber(a,b);
    // print result
    printf("%d",max);
}