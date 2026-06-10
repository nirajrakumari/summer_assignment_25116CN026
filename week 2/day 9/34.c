// to print reverse number traingle
//12345
//1234
//123
//12
//1
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}