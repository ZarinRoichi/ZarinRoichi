/*Course Name:Elementary Structured Programming Lab, Assignment No.1,Semester:1st,Group:1,ID:20210104111*/
#include <stdio.h>
int main()
{
   int i,num;
   printf("Input the number: ");
   scanf("%d",&num);
   for(i=1;i<=10;i++)
   {
     printf("%d X %d = %d \n",num,i,num*i);
   }
   return 0;
}
