// to print character pattern
//A
//BB
//CCC
//DDDD
//EEEEE
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=65;i<=65+n;i++){
        for(int k=65;k<=i;k++){
            printf("%c",i);
        }
        printf("\n");
    }
}