// to check if string is palindrome
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,c=0;
    char arr[30];
    printf("enter string\n");
    //input string
    gets(arr);
    // length of string
   l= strlen(arr);
   // to check empty string
   if(l==0){
    printf("string is not palindrome");
   }
   // to check if palindrome
   else{
    for(i=0;i<l/2;i++){
      if  (arr[i]==arr[l-1-i]){
    c++;
    }}
    if(c==l/2){
        printf("string is palindrome");
    }
    else{
     printf("string is not palindrome");
    }}
return 0;
}