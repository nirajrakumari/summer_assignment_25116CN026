// quiz application
#include<stdio.h>
#include<string.h>
int main(){
    char choice;
    int correct=0;
  char  correct_choice1='A';
  char  correct_choice2='D';
  char  correct_choice3='B';
  char  correct_choice4='A';
  char  correct_choice5='B';
char question1[]={"\nWhich of the following programming languages is primarily object-oriented?\n" 
"A. Java\nB. C++\nC. Python\nD. C\n"};
char question2[]={"\nWhich one of this is both compiled and interpreted?\n"
"A.assembly\nB. C++\nC. Html\nD.Java\n"};
char question3[]={"\nWhich one of this is best for web development?\n"
"A.python\nB. Javascript\nC. Html\nD. kotlin\n"};
char question4[]={"\nWhich one of this is used in machine learning?\n"
"A.Python\nB. C++\nC. Html\nD. Java\n"};
char question5[]={"\nWhich one of this is used for android development?\n"
"A.Python\nB. kotlin\nC. Html\nD. Java\n"};
printf("\n   Let's start the quiz   \n");
printf("\n  You have to answer five questions!!  \n");
//---------question 1-------------------
printf("%s",question1);
printf("enter your choice ");
 scanf(" %c",&choice);
 if(choice=='A'||choice=='B'||choice=='C'||choice=='D'){
if(choice!=correct_choice1){
printf("incorrect choice\n");
printf("correct choice is %c",correct_choice1);
}
else{
printf("correct choice\n");
correct++;
}}
else{
    printf("Invalid choice!!\n");
}
//---------question 2-------------------
printf("%s",question2);
printf("enter your choice ");
 scanf(" %c",&choice);
 if(choice=='A'||choice=='B'||choice=='C'||choice=='D'){
if(choice!=correct_choice2){
printf("incorrect choice\n");
printf("correct choice is %c",correct_choice2);
}
else{
printf("correct choice\n");
correct++;
}}
else{
    printf("Invalid choice!!\n");
}
//----------question 3-------------------
printf("%s",question3);
printf("enter your choice ");
 scanf(" %c",&choice);
 if(choice=='A'||choice=='B'||choice=='C'||choice=='D'){
if(choice!=correct_choice3){
printf("incorrect choice\n");
printf("correct choice is %c",correct_choice3);
}
else{
printf("correct choice\n");
correct++;
}}
else{
    printf("Invalid choice!!\n");
}
//-----------question 4-------------------
printf("%s",question4);
printf("enter your choice ");
 scanf(" %c",&choice);
 if(choice=='A'||choice=='B'||choice=='C'||choice=='D'){
if(choice!=correct_choice4){
printf("incorrect choice\n");
printf("correct choice is %c",correct_choice4);
}
else{
printf("correct choice\n");
correct++;
}}
else{
    printf("Invalid choice!!\n");
}
//-------------question 5-------------------
printf("%s",question5);
printf("enter your choice ");
 scanf(" %c",&choice);
 if(choice=='A'||choice=='B'||choice=='C'||choice=='D'){
if(choice!=correct_choice5){
printf("incorrect choice\n");
printf("correct choice is %c",correct_choice5);
}
else{
printf("correct choice\n");
correct++;
}}
else{
    printf("Invalid choice!!\n");
}
printf("No of correct answers %d\n",correct);
printf("\nend!!");
return 0;
}
