// to print half pyramid pattern
#include<stdio.h>
int main(){
    int n;
    // enter the rows
    printf("enter the value of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}
