#include<stdio.h>
int sum()
{
int s,a,b;
s=0;
printf("Enter two numbers : ");
scanf("%d%d",&a,&b);
s=a+b;
printf("The sum of the two numbers = %d",s);
return (s);
}
int main()
{
int c;
printf("Do you want to know sum of two numbers?\nif yes enter 1, else enter 0\n");
printf("Your answer : ");
scanf("%d",&c);
if(c==1)
{
  sum();
  printf("\nEnd of program");
}
else if(c==0)
{
  printf("\nEnd of program");
}
else
{
  printf("Invalid choice\n");
  printf("\nEnd of program");
}
return 0;
}
