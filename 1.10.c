#include<stdio.h>
int main()
{
    int d;
    printf("Enter a digit(0-9):");
    scanf("%d",&d);
    if (d == 0)
    printf("Zero");
else if (d == 1)
    printf("One");
else if (d == 2)
   printf("Two");
else if (d == 3)
    printf("Three");
else if (d == 4)
   printf("Four");
else if (d == 5)
    printf("Five");
else if (d == 6)
   printf("Six");
else if (d == 7)
    printf("Seven");
else if (d == 8)
    printf("Eight");
else if (d == 9)
    printf("Nine");
else
    printf("Invalid Digit");
return 0;
}
