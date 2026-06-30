#include<stdio.h>
#include<string.h>
struct st{
char name[50];
int rollno;
char address[50];
};
int main(){
printf("enter the number of students");
    int size;
    scanf("%d",&size);
    getchar();
struct st student[size];
int i;
for(int i=0;i<size;i++){
    printf("enter the name");
    gets(student[i].name);
     printf("enter the rollno");
    scanf("%d",&student[i].rollno);
    getchar();
     printf("enter the address");
    gets(student[i].address);
}
for(int i=0;i<size;i++){
    printf("\nName:%s\n",student[i].name);
     printf("Roll no:%d\n",student[i].rollno);
     printf("Address:%s\n",student[i].address);
}
}