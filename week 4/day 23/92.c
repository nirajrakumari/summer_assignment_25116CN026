// to count max frequency element
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,j,c;
    int max=0;
    char m;
    char arr[30];
    // input string
    printf("enter string\n");
    gets(arr);
   l= strlen(arr);
   // to calculate max 
    for(i=0;i<l;i++){
        c=0;
    for(j=0;j<l;j++){
        if(arr[j]==arr[i]){
            c++;
        }
    }
    if(max<c){
        max=c;
        m=arr[i];
    }}
        printf("%c",m);
return 0;
}