//Write a C program to calculate Simple interest and Compound interest//
#include<stdio.h>
#include<math.h>
int main()
{
  float p,t,r,si,ci;
  printf("Enter the Principle amount (P): ");
  scanf("%f",&p);
  printf("Enter the time in years (T): ");
  scanf("%f",&t);
  printf("Enter the rate in percent(R): ");
  scanf("%f",&r);

  si=p*t*r/100.00;
  ci=p*(pow(1+r/100,t)-1);
  printf("The Simple Interest is:%0.2f\n",si);
  printf("The Compound Interest is:%0.2f",ci);
  return 0;
}
