// to print number pyramid
//   1
//  121
// 12321
//1234321
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=i;s<=n;s++){
            printf(" ");
        }
        for(int s=1;s<=i;s++){
                printf("%d",s);
                }
                for(int j=i-1;j>=1;j--){
                    printf("%d",j);
                }
        printf("\n");
    }
}