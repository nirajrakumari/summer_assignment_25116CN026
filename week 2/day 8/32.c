// to print number traingle
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            printf("%d",i);
        }
        printf("\n");
    }
}
