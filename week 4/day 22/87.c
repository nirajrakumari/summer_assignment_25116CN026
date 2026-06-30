// to calculate character frequency
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,c=0;
    char arr[30],ch;
    printf("enter string\n");
    // input string
    gets(arr);
   l= strlen(arr);
   // input character
   printf("enter the character\n");
   scanf("%c",&ch);
   // to calculate frequency
    for(i=0;i<l;i++){
        if(arr[i]==ch){
        c++;
    }}
    printf("frequency is %d",c);
return 0;
}