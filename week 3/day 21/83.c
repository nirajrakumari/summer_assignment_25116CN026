// count vowel and consonant
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,vcount=0,count=0;
    char arr[30];
    printf("enter string\n");
    gets(arr);
  for(i=0;i<strlen(arr);i++){
    if(arr[i]=='a'||arr[i]=='e'||arr[i]=='u'||arr[i]=='i'||arr[i]=='o'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
        vcount=vcount+1;
    }
    else if((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')){
        count=count+1;
    }
}
    printf("vowelcount= %d consonant count= %d",vcount,count);
return 0;
}