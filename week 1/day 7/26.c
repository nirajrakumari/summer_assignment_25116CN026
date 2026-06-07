// to print fibonacci series using recursion
#include<stdio.h>
// to calculate fibonacci terms
int fibonacci(int x){
    int a=0,b=1;
    if(x==1){
        return a;
    }
    if(x==2){
        return b;
    }
    if(x>2){
    return fibonacci(x-1)+fibonacci((x-2));
}}
int main(){
    int n;
    // input the n term
    printf("enter the number up to series you want");
    scanf("%d",&n);
    printf("fibonacci seies:\n");
    // to print the series
    for(int i=1;i<=n;i++){
    printf(" %d",fibonacci(i));
}
return 0;
}