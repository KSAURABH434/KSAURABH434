#include<stdio.h>
#include<math.h>
int main()
{
float P,T,R,CI;
printf("enter principle amount \n");
scanf("%f",&P);
printf("enter Rate of interest \n");
scanf("%f",&R);
printf("enter the time \n");
scanf("%f",&T);
CI=P*(pow((1+R/100),T));
printf("the compound interest is %f \n",CI);
return 0;
}
