// to print hollow square pattern
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(k==1||i==1||k==n||i==n){
            printf("*");
        }
        else{
       printf(" ");
        }
        }
        printf("\n");
    }
}