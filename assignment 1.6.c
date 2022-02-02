/*Course Name:Elementary Structured Programming Lab, Assignment No.1,Semester:1.1,Group:C1,ID:20210104111*/
#include<stdio.h>

int main()
{
int sal;
float GS,HRA,CCA,DA,PF,IT,NS;
printf("enter basic sal:");
scanf("%f",&sal);

HRA=(sal*40/100);
DA=(sal*10/100);
CCA=(sal*5/100);
GS=(sal+HRA+DA+CCA);
PF=(GS*10/100);
IT=(GS*10/100);
NS=(GS-(PF-IT));
printf("\n NS:%f",NS);
printf("\n IT:%f",IT);
printf("\n PF:%f",PF);
printf("\n HRA:%f",HRA);
printf("\n GS:%f",GS);
printf("\n CCA:%f",CCA);
printf("\n DA:%f",DA);
return 0;
}

