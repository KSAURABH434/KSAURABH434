#include <stdio.h>
int main()
{
int a,b,c,d,e,avg;
float per;
printf("enter the first subject marks \n");
scanf("%d",&a);
printf("enter the second subject marks \n");
scanf("%d",&b);
printf("enter the third subject marks \n");
scanf("%d",&c);
printf("enter the fourth subject marks \n");
scanf("%d",&d);
printf("enter the fifth subject marks \n");
scanf("%d",&e);
avg=(a+b+c+d+e)/5;
printf("the average  is %d \n",avg);
per=100*(a+b+c+d+e)/500;
printf("the percentage is %f \n",per);
return 0;
}
