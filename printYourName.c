// your name surname and age from user

#include<stdio.h>
int main(){
 char name[20] , surname[30];
 int age;
 printf("Enter your name:");
 scanf("%s", name);
 
 printf("Enter your surname:");
 scanf("%s", surname);
 
 printf("Enter your age:");
 scanf("%d", age);
 
 printf("your name %s your surname %s your age d",&name,&surname,&age);
 return 0;
}
