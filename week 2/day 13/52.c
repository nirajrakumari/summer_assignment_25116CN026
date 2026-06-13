// to find no of even and odd elements
#include<stdio.h>
int main(){
    int size,evennum=0,oddnum=0;
    // input size of array
   printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    // input elements of array
    printf("enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    // to calculate no of even and odd elements
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evennum=evennum+1;
        }
        else{
            oddnum=oddnum+1;
    }
}
// print the result
        printf("no of even elements=%d no of odd elements= %d",evennum,oddnum);
    return 0;
}