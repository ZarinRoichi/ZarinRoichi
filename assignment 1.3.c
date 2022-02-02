/*Course Name:Elementary Structured Programming Lab, Assignment No.1,Semester:1.1,Group:C1,ID:20210104111*/
#include<stdio.h>
#include<math.h>
int main()
{
    int choice,r;
    float area,circumference;
    printf("Enter choice:");
    scanf("%d",&choice);
    printf("Enter radius:");
    scanf("%d",&r);

    if(choice == 1)
    {
        printf("area of a circle:%f",area=3.1416*r*r);
    }
    else if(choice == 2)
    {
        printf("circumference of a circle:%f",circumference=2*3.1416*r);
    }
    else
    {
        printf("invalid");
    }
     return 0;
}
