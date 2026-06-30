// atm simulation system
#include<stdio.h>
int main(){
    int choice;
float balance=11003.4,damount,wamount;
printf("enter the 1 for balance check \n enter 2 for amount deposit \n ");
printf("enter 3 for widthdraw \n enter 4 to exit");
scanf("%d",&choice);
if(choice==1){
    printf("Balance check sucessful\nYour amount is:%0.2f",balance);
}
else if(choice==2){
    printf("enter the amount for deposit");
    scanf("%f",&damount);
    balance=balance+damount;
    printf("sucessfully compeleted\n");
    printf("Balance:%0.2f",balance);
}
else if(choice==3){
    printf("enter the amount for widthdrawal");
    scanf("%f",&wamount);
    if(balance>=wamount){
    balance=balance-wamount;
    printf("sucessfully compeleted\n");
    printf("Balance:%0.2f",balance);
}
else{
    printf("Insufficient balance");
}}
 else if (choice == 4) {
        printf("Exiting system \nThank you!\n");
    }
    else {
        printf("Invalid choice\n");
    }
    
    return 0;
}
