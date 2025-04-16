#include<stdio.h>
int f1(int n)
{
 int i,fact=1;
 for(i=1;i<=n;i++)
  fact*=i;
 return fact;
}
int f(int n)
{
 if(n<=1)
  return n;
 else
  return n*f(n-1);
}
void main()
{
int n;
printf("Enter the Number : ");
scanf("%d",&n);
printf("Factorial is : %d\n",f(n));
printf("Factorial is : %d\n",f1(n));
}
