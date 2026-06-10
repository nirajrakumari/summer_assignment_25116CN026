// to print reverse star pattern
//****
//***
//**
//*   

#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}