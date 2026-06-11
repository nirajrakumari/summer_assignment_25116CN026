// to print character pyramid
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=i;s<=n;s++){
            printf(" ");
        }
        for(int k=65;k<65+i;k++){
            printf("%c",k);
        }
        for(int j=63+i;j>=65;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}