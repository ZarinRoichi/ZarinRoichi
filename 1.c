/*Course Name:Elementary Structured Programming Lab, Assignment No.1,Semester:1st,Group:1,ID:20210104111*/
#include <stdio.h>
int main()
{
    int i,n,c=0,sum=0,average;
    printf("Input Number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2;c++)
    {
        sum=sum+i;

    }
    average=sum/c;

    printf("Sum= %d",sum);
    printf("\nAverage= %d",average);

    return 0;
}
