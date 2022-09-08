#include<stdio.h>
#include<math.h>
int main()
{
  float P,r,t,A,TVC,TFC,TC;
  printf("enter the value of principle");
  scanf("%f",&P);
  printf("enter the value of rate");
  scanf("%f",&r);
  printf("enter the value of time");
  scanf("%f",&t);
  printf("enter the value of TVC");
  scanf("%f",&TVC);
  printf("enter the value of TFC");
  scanf("%f",&TFC);

  A=P*(1+r*t);

 printf("%f is simple interest",A);


 TC=TFC+TVC;
 printf("%f is the value of TC",TC);

 return 0;

}
