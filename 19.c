#include <stdio.h>
int main()
{
int r,d;
float c,area=0;
printf("Enter radius \n");
scanf("%d",&r);
area=(3.14)*r*r;
d=2*r;
c=2*(3.14)*r;
printf("The area of the circle is %f \n",area);
printf("The diameter of the circle is %d \n",d);
printf("The circumference of the circle is %f \n",c);
return 0;
}
