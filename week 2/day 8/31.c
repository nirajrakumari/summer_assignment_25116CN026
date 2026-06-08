// to print elphabet traingle
#include<stdio.h>
int main(){
    int n;
    printf("enter the value of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=65;k<=65+i;k++){
            printf("%c",k);
        }
        printf("\n");
    }
   return 0;
}