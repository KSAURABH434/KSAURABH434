#include<stdio.h>
#include<math.h>
int main()
{
int x,y,exp;
printf("Enter the power\n");
scanf("%d",&y);
printf("Enter the base5\n");
scanf("%d",&x);
exp=pow(x,y);
printf("power of number is %d",exp);
return 0;
}
