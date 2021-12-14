#include <stdio.h>
int main()
{
int a,b;
int sum=0;
int pro=1;
int sub=0;
int quo,rem;
printf("enter the first number \n");
scanf("%d",&a);
printf("enter the second number \n");
scanf("%d",&b);
sum=a+b;
printf("the sum of the numbers is %d \n",sum);
sub=a-b;
printf("the substraction of the numbers is %d \n",sub);
pro=a*b;
printf("the product of the numbers is %d \n",pro);
quo=a/b;
rem=a%b;
printf("the quotient of the numbers is %d \n",quo);
printf("the remainder of the numbers is %d \n",rem);
return 0;
}
