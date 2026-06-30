// to remove duplicate character
#include<stdio.h>
#include<string.h>

int main(){
    int i=0,l,j,c=0;
    char arr[30],m[30];
    printf("enter string\n");
    // input string
    gets(arr);
    l= strlen(arr); 
    c = 0; 
    // to find duplicate
    for(i = 0; i < l; i++){
        int is_duplicate = 0;
        for(j = 0; j < c; j++){
            if(arr[i] == m[j]){
                is_duplicate = 1; // Found a duplicate character
                break;
            }
        }     
        // add it to array m
        if(is_duplicate == 0){
            m[c] = arr[i];
            c++;
        }
    }
    m[c] = '\0';
    
    printf("%s", m);

    return 0;
}