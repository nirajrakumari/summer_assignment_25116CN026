// to see if string is anagram
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,j,c=0;
    char arr[30],b[30];
    // input string
    printf("enter string 1\n");
    gets(arr);
    printf("enter string 2\n");
    gets(b);
   l= strlen(arr);
  int s=strlen(b);
  if(l==s){
    for(i=0;i<l;i++){
    for(j=0;j<l;j++){
        if(arr[i]==b[j]){
            c=c+1;
            b[j]= '*';
            break;
        }
    }}
    // print if anagram
    if(c==l){
        printf("anagram strings");
    }
    else{
        printf("not anagram strings");

    }
}
else{
    printf("not anagram strings");
}
return 0;
}