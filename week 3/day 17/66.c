// to find union of arrays
#include<stdio.h>
int main(){
    int size1,size2,size3;
    // input size of first array
    printf("enter the size of  first array");
    scanf("%d",&size1);
    // input size of second array
    printf("enter the size of  second array");
    scanf("%d",&size2);
    int a[size1],b[size2];
    // input element of first array
    printf("enter the element of first array");
    for(int i=0;i<size1;i++){
        scanf("%d",&a[i]);
    }  // input element of second array
    printf("enter the element of second array");
    for(int s=0;s<size2;s++){
        scanf("%d",&b[s]);
    }
    // The maximum possible size of a union is the sum of both array sizes
    size3 = size1 + size2;
    int union1[size3]; 
    int count = 0; 
    
    for (int i = 0; i < size1; i++) {
        int already_exists = 0;
        for (int j = 0; j < count; j++) {
            if (a[i] == union1[j]) {
                already_exists = 1;
                break;
            }
        }
        if (already_exists==0) {
            union1[count] = a[i];
            count++;
        }
    }
    
    for (int i = 0; i < size2; i++) {
        int already_exists = 0;
        for (int j = 0; j < count; j++) {
            if (b[i] == union1[j]) {
                already_exists = 1;
                break;
            }
        }
        if (!already_exists) {
            union1[count] = b[i];
            count++;
        }
    }
    
    // Print the array
    printf("Union of arrays is: ");
    for (int m = 0; m < count; m++) {
        printf("%d ", union1[m]);
    }
    return 0;
}