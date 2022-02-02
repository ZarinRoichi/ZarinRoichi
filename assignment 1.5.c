/*Course Name:Elementary Structured Programming Lab, Assignment No.1,Semester:1.1,Group:C1,ID:20210104111*/
#include<stdio.h>
#include<math.h>
int main()
{
    int salary;
    float tax;
    printf("Enter salary:");
    scanf("%d",&salary);

    if(salary>=9500)
    printf("value of tax:%f",tax=(salary*30)/100);
    else if(salary>=7500 && salary<=8999)
    printf("value of tax:%f",tax=(salary*20)/100);
    else if(salary<=7500)
    printf("value of tax:%f",tax=(salary*10)/100);
    else
    printf("invalid number");

    return 0;

}

