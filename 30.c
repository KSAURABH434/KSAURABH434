#include<stdio.h>
int main()
{
int P,T,R,SI;
printf("enter principle amount \n");
scanf("%d",&P);
printf("enter Rate of interest \n");
scanf("%d",&R);
printf("enter the time \n");
scanf("%d",&T);
SI=(P*R*T)/100;
printf("the simple interest is %d \n",SI);
return 0;
}
