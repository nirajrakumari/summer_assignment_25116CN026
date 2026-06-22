// to calculate length of string without using string function
#include<stdio.h>
int main(){
    int i=0;
    char arr[30];
    printf("enter string");
    // input string
    gets(arr);
    // calculate length
    while(arr[i]!='\0'){
        i++;
    }
    printf("%d",i);
return 0;
}