// to covert lower case into upper case
#include<stdio.h>
#include<string.h>
int main(){  
    int i=0;
    char arr[30],ch;
    // input string
    printf("enter string\n");
    gets(arr);
    // to convert
  for(i=0;i<strlen(arr);i++){
    ch=arr[i];
    if(97<=ch&&ch<=122){
        arr[i]=ch-32;
    }
}
    puts(arr);
return 0;
}