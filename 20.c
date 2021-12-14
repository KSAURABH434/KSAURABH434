#include <stdio.h>
int main()
{
float c,m,k;
printf("Enter the number in centimeter \n ");
scanf("%f",&c);
m=(float)(c/100);
k=(float)(c/100000);
printf("The value of length in m is %f \n",m);
printf("The value of length in km is %f \n",k);
return 0;
}

