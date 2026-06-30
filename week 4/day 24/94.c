// to compress the string
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,j,c=0;
    char arr[30],m[60]; 
    printf("enter string\n");
    // input string
    gets(arr);
    l= strlen(arr); 
    c = 0; 
    // for finding repeating character and counting them
    for(i = 0; i < l; i++){
        int count = 1;
        while(i + 1 < l && arr[i] == arr[i + 1]) {
            count++;
            i++; 
        }
        m[c] = arr[i];
        c++;
        // adding the count into array m
        m[c] = count+'0' ; 
        c++;
    }
    // terminating the array
    m[c] = '\0';  
    printf(" %s", m);
    return 0;
}
