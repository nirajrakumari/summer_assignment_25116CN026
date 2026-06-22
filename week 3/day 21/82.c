// reverse string
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l;
    char arr[30];
    // input string
    printf("enter string\n");
    gets(arr);
   l= strlen(arr);
   // to reverse
    for(i=0;i<l/2;i++){
        int temp=arr[i];
        arr[i]=arr[l-1-i];
        arr[l-1-i]=temp;
    }
    puts(arr);
return 0;
}