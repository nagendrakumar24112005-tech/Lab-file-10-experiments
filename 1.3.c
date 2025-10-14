#include<stdio.h>
int main(){
    char name;
   printf("what is your name\n");
    scanf("%s",&name);
       int age[50];

    printf("what is your age\n");
    scanf("%s",&age);
     char city;

    printf("what is your city\n");
    scanf("%s",&city);

    printf("%s,%s,%s",name,age,city);
    return 0;
}