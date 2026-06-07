// to reverse the number using recursion
#include<stdio.h>
#include<math.h>
// to calculate reverse of number
int reverse(int x,int r){
    if(x==0){
        return r;
    }
    return reverse(x/10,r*10+(x%10));
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    // print the result
    printf("reverse of  %d is: %d",n,reverse(n,0));

}