#include<stdio.h>
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}//To swap the adjascent items

void scan(int arr[],int n)
{
for(int i=0;i<n;i++)
{
printf("Enter Array element : ");
scanf("%d",&arr[i]);
}//for scanning array
}

void print(int arr[],int n)
{
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
}//For printing array

void bs(int arr[],int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<(n-i-1);j++)
{
if(arr[j]>arr[j+1])

	swap(&arr[j],&arr[j+1]);//what we need to swap was the content in the address hence the '&' sign
}
}
}//For bubble sorting

int main()
{
int a;
printf("Enter the size of array : ");
scanf("%d",&a);
int arr[a];
scan(arr,a);
printf("before sorting : ")
print(arr,a);
bs(arr,a);
printf("After sorting : ")
print(arr,a);
return 0;
}
