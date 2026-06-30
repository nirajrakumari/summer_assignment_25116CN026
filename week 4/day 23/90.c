#include<stdio.h>
#include<string.h>
int main(){
    int i=0,l,j,flag=0;
    char arr[30];
    printf("enter string\n");
    gets(arr);
   l= strlen(arr);
        for(i = 0; i < l; i++){
        for(j = i+1; j < l; j++){
            if(arr[j] == arr[i]){
                printf("%c", arr[i]);
                flag = 1; 
                break;
            }
        }
        if(flag == 1){
            break; 
        }
    }
        
return 0;
}