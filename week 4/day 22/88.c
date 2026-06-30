// to remove spaces
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,j=0;
    char arr[30],ch=32;
    printf("enter string\n");
    // input string
    gets(arr);
   l= strlen(arr);
   // to remove spaces
    for (i = 0; i < l; i++) {
        if (arr[i] != ch) {
            arr[j] = arr[i]; 
            j++;             
    }
    }
     arr[j] = '\0';
    puts(arr);
return 0;
}