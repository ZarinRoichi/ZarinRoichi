/*Course Name:Elementary Structured Programming Lab, Assignment No.1,Semester:1st,Group:1,ID:20210104111*/
#include <stdio.h>
int main()
 {
    int i,n;
    printf("Input number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i,(i*i*i));
    }
    return 0;
 }
