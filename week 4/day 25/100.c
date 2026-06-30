// to sort on base of length
#include<stdio.h>
#include<string.h>
int main(){
    int size;
    char temp[50];
    printf("enter the number of names");
    scanf("%d",&size);
    getchar();
char c[size][50];
 printf("enter the names");
for(int i=0;i<size;i++){
   gets(c[i]);
}
for(int i=0;i<size;i++){
    for(int j=0;j<size-1-i;j++){
       if(strlen(c[j])>strlen(c[j+1])){
        strcpy (temp,c[j+1]);
         strcpy(c[j+1],c[j]);
         strcpy(c[j],temp);
       }
    }
}
for(int i=0;i<size;i++){
    puts(c[i]);
}
      return 0;
    }