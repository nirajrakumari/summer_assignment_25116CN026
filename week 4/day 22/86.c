// to count no of words in string
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,c=0;
    char arr[30],ch=32;
    printf("enter string\n");
    // input string
    gets(arr);
   l= strlen(arr);
   // to count words
     for (i = 0; i < l; i++) {
        if (arr[i] == ch) {
            if (i > 0 && arr[i-1] != ch) {
                c++;
            }
        }
    }
    // for null character
    if (l > 0 && arr[l-1] != ch) {
        c++;
    }
    printf("%d",c);
return 0;
}