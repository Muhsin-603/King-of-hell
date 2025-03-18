#include<stdio.h>
struct employee
{
int id;
char name[20];
float sal;
};
int main()
{
int n,i;
printf("Enter the number of employees :  ");
scanf("%d",&n);
struct employee e[n];
for(i=0;i<n;i++)
{
printf("Enter the id of employee %d :  ",i+1);
scanf("%d",&e[i].id);
printf("Enter the name of employee %d :  ",i+1);
scanf("%s",e[i].name);
printf("Enter the salary of employee %d :  ",i+1);
scanf("%f",&e[i].sal);
}
printf("id\tName\tSalary\n");
for(i=0;i<n;i++)
{
printf("%d\t%s\t%.2f\n",e[i].id,e[i].name,e[i].sal);
}
return 0;
}
