// to print the factors of the number
#include<stdio.h>
int main(){
    //intializing c as 0
    int n,c=0;
    //input the number
    printf("enter the number");
    scanf("%d",&n);
    printf("factors of the number is");
    //for finding and printing the factors of the no we have used for loop
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c=i;
        printf("%d\n",c);
    }}
    return 0;
}