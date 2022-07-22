//Write a C program to convert Celsius to Fahrenheit temperature//
#include<stdio.h>
int main()
{
  float celsius,fahrenheit;

  printf("Enter temperature in celsius : ");
  scanf("%f",&celsius);

  fahrenheit=(celsius*9/5)+32;

  printf("%f celsius= %f fehrenheit",celsius,fahrenheit);
  return 0;
}
