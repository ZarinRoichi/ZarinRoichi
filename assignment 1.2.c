/*Course Name:Elementary Structured Programming Lab, Assignment No.1,Semester:1.1,Group:C1,ID:20210104111*/
#include<stdio.h>
int main()
{
    int sp,cp,profit,loss;
    printf("Enter sp:");
    scanf("%d",&sp);
    printf("Enter cp:");
    scanf("%d",&cp);
    if(sp>cp)
    {
       printf("profit");
    }

    else
    {
       printf("loss");
    }


    profit=(sp-cp);
    loss=(cp-sp);

    if(sp>cp)
    {
         printf("\n value of profit is :%d",profit);
    }

    else
    {
        printf("\n value of loss is:%d",loss);
    }

    return 0;

}
