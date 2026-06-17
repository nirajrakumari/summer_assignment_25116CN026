#include<stdio.h>
int main(){
    int size,i=0,m=0,c=0;
    //input the size of array
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    // input elements of array
    printf("enter the elements of array");
    for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        for(m=0;m<size;m++){
            if(i==arr[m]){
                c++;
            }
        }
        if(c==i){
            printf("missing element is %d",c);
            break;
        }
        }
    return 0;
    }