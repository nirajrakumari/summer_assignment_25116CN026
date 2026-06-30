// to find common elements 
#include<stdio.h>
#include<string.h>
int main(){
    int already_taken,k;
    char a[50],b[50];
    printf("enter the first string");
   gets(a); 
    printf("enter the  second string");
   gets(b);
    int m=0,i=0;
    // to find common character
   printf(" characters are :\n");
   for( m=0;m<strlen(a);m++){
    already_taken=0;
    for( k=0;k<m;k++){
        if(a[m]==a[k])
        {
            already_taken=1;
        }}
        if(already_taken==1){
            continue;
        }
       for( i=0;i<strlen(b);i++){
      if(a[m]==b[i]){
           printf("%c",a[m]);
           break;
      }}}
      return 0;
    }