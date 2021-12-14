#include <stdio.h>
int main()
{
float cel,far;
printf("Enter the temperature in farhenheit");
scanf("%f",&far);
cel=(5.0/9.0)*(far-32);
printf("The temperature in celcius is %f",cel);
return 0;
}
