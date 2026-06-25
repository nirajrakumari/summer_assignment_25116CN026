// first non repeating character
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,j,c=0,found=0;
    char arr[30];
    printf("enter string\n");
    // input string
    gets(arr);
   l= strlen(arr);   
    for(i = 0; i < l; i++){
        c = 0; 
        for(j = 0; j < l; j++){
            if(arr[j] == arr[i]){
                c++;
            }
        }
        if(c == 1){
            printf("%c", arr[i]);
            found = 1;
            break; 
        }
    }
    if(!found){
        printf("Not found");
    }
return 0;
}