// employee management system
#include<stdio.h>
#include<string.h>
struct st{
char name[50];
int salary;
char department[50];
int id;
};
int main(){
printf("enter the number of employ");
    int size;
    scanf("%d",&size);
    getchar();
struct st employee[size];
int i;
for(int i=0;i<size;i++){
    printf("enter the name");
    gets(employee[i].name);
     printf("enter the salary");
    scanf("%d",&employee[i].salary);
    getchar();
     printf("enter the address");
    gets(employee[i].department);
}
for(int i=0;i<size;i++){
    printf("\nName:%s\n",employee[i].name);
     printf("Roll no:%d\n",employee[i].salary);
     printf("Address:%s\n",employee[i].department);
}
}