//Write a program in C/C++ to print a short paragraph about yourself. (minimum 10 sentences and minimum 5 user input values will be concatenated.)
#include<stdio.h>
int main()
{
    char c[20];
    char name,age,occupation,university,hobby;
    scanf("%c %c %c %c %c %c",&c,&name,&age,&occupation,&university,&hobby);
    printf("%c",name);
    printf("%c",age);
    printf("%c",occupation);
    printf("%c",university);
    printf("%c",hobby);
    return 0;
}
